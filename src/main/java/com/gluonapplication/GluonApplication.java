package com.gluonapplication;

import com.gluonapplication.views.AppViewManager;
import com.gluonhq.charm.glisten.application.MobileApplication;
import com.gluonhq.charm.glisten.visual.Swatch;
import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.stage.Stage;
import org.bouncycastle.jce.provider.BouncyCastleProvider;

import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
import javax.crypto.NoSuchPaddingException;
import java.io.File;
import java.security.*;
import java.util.logging.Level;

public class GluonApplication extends MobileApplication {

    private Provider provider;
    private static final String CIPHER_ALGORITHM = "AES";
    private static final String KEYPAIR_GENERATOR_ALGORITHM = "RSA";
    private static final String KEY_GENERATOR_ALGORITHM = "AES";
    private static final String KEY_FACTORY_ALGORITHM = "RSA";
    private static final String KEY_STORE_TYPE = "PKCS12";
    private static final String SIGNATURE_ALGORITHM = "SHA256withRSA";
    private static final String HASH_ALGORITHM = "PBKDF2WithHmacSHA256";
    private static final String TEMPORAL_KEY_ALGORITHM = "RSA";
    private static final int AES_KEY_SIZE = 256;
    private static final int RSA_KEY_SIZE = 2048;
    private File KEY_STORE_FILE;
    private static final String KEY_STORE_NAME = "keyStore";
    private static final String KEY_STORE_DIRECTORY_NAME = "security";
    private final KeyGenerator[] keyGenerators = new KeyGenerator[TOTAL_CIPHER_UNITS];
    private final Cipher[] temporalKeyEncrypters = new Cipher[TOTAL_CIPHER_UNITS];
    private final Cipher[] temporalKeyDecrypters = new Cipher[TOTAL_CIPHER_UNITS];
    private final Cipher[] payloadEncrypters = new Cipher[TOTAL_CIPHER_UNITS];
    private final Cipher[] payloadDecrypters = new Cipher[TOTAL_CIPHER_UNITS];
    private final KeyFactory[] keyFactories = new KeyFactory[TOTAL_CIPHER_UNITS];
    private final Signature[] signers = new Signature[TOTAL_CIPHER_UNITS];
    private static final int TOTAL_CIPHER_UNITS = 14;

    @Override
    public void init() {
        securityTest();
        AppViewManager.registerViewsAndDrawer(this);
    }

    @Override
    public void postInit(Scene scene) {
        Swatch.BLUE.assignTo(scene);

        scene.getStylesheets().add(GluonApplication.class.getResource("style.css").toExternalForm());
        ((Stage) scene.getWindow()).getIcons().add(new Image(GluonApplication.class.getResourceAsStream("/icon.png")));
    }

    public static void main(String args[]) {
        launch(args);
    }

    private void securityTest() {
        Security.removeProvider("BC");
        // also remove not sufficient AndroidOpenSSL provider for X.509 - most likely only needed if BouncyCastleJsseProvider is used
        Security.removeProvider("AndroidOpenSSL");
        // touch the internal Providers class to trigger the static provider loading
        // see http://androidxref.com/9.0.0_r3/xref/libcore/ojluni/src/main/java/sun/security/jca/Providers.java#SYSTEM_BOUNCY_CASTLE_PROVIDER
        try {
            Class.forName("sun.security.jca.Providers");
        } catch (ClassNotFoundException e) {
            throw new RuntimeException(String.format("%s to patch not found.", "sun.security.jca.Providers"), e);
        }
        provider = new BouncyCastleProvider();

        Security.insertProviderAt(provider, 0);

        final File keyStoreDirectory = new File(System.getProperty("user.home"), KEY_STORE_DIRECTORY_NAME);
        // make sure that the path to the directory
        keyStoreDirectory.mkdirs();
        // create the key store file object
        KEY_STORE_FILE = new File(keyStoreDirectory, KEY_STORE_NAME);

        for (int i = 0; i < TOTAL_CIPHER_UNITS; i++) {
            try {
                // we init the key generator with the AES key size
                keyGenerators[i] = KeyGenerator.getInstance(KEY_GENERATOR_ALGORITHM, provider);
                keyGenerators[i].init(AES_KEY_SIZE);
                temporalKeyEncrypters[i] = Cipher.getInstance(TEMPORAL_KEY_ALGORITHM, provider);
                temporalKeyDecrypters[i] = Cipher.getInstance(TEMPORAL_KEY_ALGORITHM, provider);
                payloadEncrypters[i] = Cipher.getInstance(CIPHER_ALGORITHM, provider);
                payloadDecrypters[i] = Cipher.getInstance(CIPHER_ALGORITHM, provider);
                keyFactories[i] = KeyFactory.getInstance(KEY_FACTORY_ALGORITHM, provider);
                signers[i] = Signature.getInstance(SIGNATURE_ALGORITHM, provider);
            } catch (NoSuchPaddingException | NoSuchAlgorithmException ex) {
                ex.printStackTrace();
            }
        }
    }
}
