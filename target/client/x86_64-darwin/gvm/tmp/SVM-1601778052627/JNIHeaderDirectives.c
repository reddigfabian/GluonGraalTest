/*
 * Structure representing an isolate. A pointer to such a structure can be
 * passed to an entry point as the execution context.
 */
struct __graal_isolate_t;
typedef struct __graal_isolate_t graal_isolate_t;

/*
 * Structure representing a thread that is attached to an isolate. A pointer to
 * such a structure can be passed to an entry point as the execution context,
 * requiring that the calling thread has been attached to that isolate.
 */
struct __graal_isolatethread_t;
typedef struct __graal_isolatethread_t graal_isolatethread_t;

#ifdef _WIN64
typedef unsigned long long __graal_uword;
#else
typedef unsigned long __graal_uword;
#endif


/* Parameters for the creation of a new isolate. */
enum { __graal_create_isolate_params_version = 1 };
struct __graal_create_isolate_params_t {
    int version;                                /* Version of this struct */

    /* Fields introduced in version 1 */
    __graal_uword  reserved_address_space_size; /* Size of address space to reserve */

    /* Fields introduced in version 2 */
    const char    *auxiliary_image_path;                /* Path to an auxiliary image to load. */
    __graal_uword  auxiliary_image_reserved_space_size; /* Reserved bytes for loading an auxiliary image. */
};
typedef struct __graal_create_isolate_params_t graal_create_isolate_params_t;
#include </Library/Java/JavaVirtualMachines/graalvm-ce-java11-20.2.0/Contents/Home/include/jni.h>
#include </Library/Java/JavaVirtualMachines/graalvm-ce-java11-20.2.0/Contents/Home/include/darwin/jni_md.h>
#include <stdio.h>
#include <stddef.h>
#include <memory.h>

#ifndef _WIN64
#define ISUNSIGNED(a) ((a) >= 0L && (typeof(a)) ~(a) >= 0L)
#else
#define ISUNSIGNED(a) ((a) >= 0L && (decltype(a)) ~(a) >= 0L)
#endif
#define IS_CONST_UNSIGNED(a) (a>=0 ? 1 : 0)

int main(void) {
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:PropertyInfo:size=%lu\n", sizeof(jvalue));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:b:PropertyInfo:size=%lu\n", sizeof(((jvalue *) 0)->b));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:b:PropertyInfo:offset=%lu\n", offsetof(jvalue, b));
    {
        jvalue tmp_jvalue_1;
        printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:b:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_jvalue_1.b)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:c:PropertyInfo:size=%lu\n", sizeof(((jvalue *) 0)->c));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:c:PropertyInfo:offset=%lu\n", offsetof(jvalue, c));
    {
        jvalue tmp_jvalue_2;
        printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:c:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_jvalue_2.c)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:d:PropertyInfo:size=%lu\n", sizeof(((jvalue *) 0)->d));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:d:PropertyInfo:offset=%lu\n", offsetof(jvalue, d));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:f:PropertyInfo:size=%lu\n", sizeof(((jvalue *) 0)->f));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:f:PropertyInfo:offset=%lu\n", offsetof(jvalue, f));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:i:PropertyInfo:size=%lu\n", sizeof(((jvalue *) 0)->i));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:i:PropertyInfo:offset=%lu\n", offsetof(jvalue, i));
    {
        jvalue tmp_jvalue_3;
        printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:i:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_jvalue_3.i)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:j:PropertyInfo:size=%lu\n", sizeof(((jvalue *) 0)->j));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:j:PropertyInfo:offset=%lu\n", offsetof(jvalue, j));
    {
        jvalue tmp_jvalue_4;
        printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:j:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_jvalue_4.j)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:l:PropertyInfo:size=%lu\n", sizeof(((jvalue *) 0)->l));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:l:PropertyInfo:offset=%lu\n", offsetof(jvalue, l));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:s:PropertyInfo:size=%lu\n", sizeof(((jvalue *) 0)->s));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:s:PropertyInfo:offset=%lu\n", offsetof(jvalue, s));
    {
        jvalue tmp_jvalue_5;
        printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:s:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_jvalue_5.s)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:z:PropertyInfo:size=%lu\n", sizeof(((jvalue *) 0)->z));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:z:PropertyInfo:offset=%lu\n", offsetof(jvalue, z));
    {
        jvalue tmp_jvalue_6;
        printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:jvalue:StructFieldInfo:z:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_jvalue_6.z)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNIEnv_:PropertyInfo:size=%lu\n", sizeof(struct JNIEnv_));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNIEnv_:StructFieldInfo:functions:PropertyInfo:size=%lu\n", sizeof(((struct JNIEnv_ *) 0)->functions));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNIEnv_:StructFieldInfo:functions:PropertyInfo:offset=%lu\n", offsetof(struct JNIEnv_, functions));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:PropertyInfo:size=%lu\n", sizeof(struct JNINativeInterface_));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallObjectMethodA:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->CallObjectMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallObjectMethodA:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, CallObjectMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallStaticBooleanMethodA:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->CallStaticBooleanMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallStaticBooleanMethodA:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, CallStaticBooleanMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallStaticIntMethodA:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->CallStaticIntMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallStaticIntMethodA:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, CallStaticIntMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallStaticLongMethodA:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->CallStaticLongMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallStaticLongMethodA:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, CallStaticLongMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallStaticObjectMethodA:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->CallStaticObjectMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallStaticObjectMethodA:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, CallStaticObjectMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallStaticVoidMethodA:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->CallStaticVoidMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:CallStaticVoidMethodA:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, CallStaticVoidMethodA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:DefineClass:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->DefineClass));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:DefineClass:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, DefineClass));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:DeleteGlobalRef:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->DeleteGlobalRef));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:DeleteGlobalRef:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, DeleteGlobalRef));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:DeleteLocalRef:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->DeleteLocalRef));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:DeleteLocalRef:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, DeleteLocalRef));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ExceptionCheck:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->ExceptionCheck));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ExceptionCheck:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, ExceptionCheck));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ExceptionClear:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->ExceptionClear));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ExceptionClear:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, ExceptionClear));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ExceptionDescribe:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->ExceptionDescribe));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ExceptionDescribe:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, ExceptionDescribe));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ExceptionOccurred:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->ExceptionOccurred));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ExceptionOccurred:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, ExceptionOccurred));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:FindClass:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->FindClass));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:FindClass:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, FindClass));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetArrayLength:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetArrayLength));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetArrayLength:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetArrayLength));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetByteArrayElements:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetByteArrayElements));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetByteArrayElements:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetByteArrayElements));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetDirectBufferAddress:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetDirectBufferAddress));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetDirectBufferAddress:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetDirectBufferAddress));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetLongArrayElements:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetLongArrayElements));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetLongArrayElements:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetLongArrayElements));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetMethodID:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetMethodID));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetMethodID:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetMethodID));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetObjectArrayElement:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetObjectArrayElement));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetObjectArrayElement:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetObjectArrayElement));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetObjectClass:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetObjectClass));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetObjectClass:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetObjectClass));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetObjectRefType:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetObjectRefType));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetObjectRefType:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetObjectRefType));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStaticBooleanField:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetStaticBooleanField));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStaticBooleanField:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetStaticBooleanField));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStaticFieldID:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetStaticFieldID));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStaticFieldID:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetStaticFieldID));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStaticMethodID:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetStaticMethodID));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStaticMethodID:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetStaticMethodID));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStringChars:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetStringChars));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStringChars:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetStringChars));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStringLength:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetStringLength));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStringLength:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetStringLength));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStringUTFChars:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetStringUTFChars));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStringUTFChars:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetStringUTFChars));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStringUTFLength:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->GetStringUTFLength));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:GetStringUTFLength:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, GetStringUTFLength));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:IsSameObject:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->IsSameObject));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:IsSameObject:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, IsSameObject));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewByteArray:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->NewByteArray));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewByteArray:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, NewByteArray));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewGlobalRef:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->NewGlobalRef));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewGlobalRef:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, NewGlobalRef));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewLongArray:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->NewLongArray));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewLongArray:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, NewLongArray));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewObjectA:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->NewObjectA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewObjectA:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, NewObjectA));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewObjectArray:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->NewObjectArray));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewObjectArray:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, NewObjectArray));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewString:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->NewString));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewString:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, NewString));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewStringUTF:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->NewStringUTF));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:NewStringUTF:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, NewStringUTF));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:PopLocalFrame:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->PopLocalFrame));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:PopLocalFrame:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, PopLocalFrame));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:PushLocalFrame:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->PushLocalFrame));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:PushLocalFrame:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, PushLocalFrame));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ReleaseByteArrayElements:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->ReleaseByteArrayElements));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ReleaseByteArrayElements:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, ReleaseByteArrayElements));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ReleaseLongArrayElements:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->ReleaseLongArrayElements));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ReleaseLongArrayElements:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, ReleaseLongArrayElements));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ReleaseStringChars:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->ReleaseStringChars));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ReleaseStringChars:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, ReleaseStringChars));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ReleaseStringUTFChars:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->ReleaseStringUTFChars));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:ReleaseStringUTFChars:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, ReleaseStringUTFChars));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:SetObjectArrayElement:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->SetObjectArrayElement));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:SetObjectArrayElement:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, SetObjectArrayElement));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:SetStaticBooleanField:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->SetStaticBooleanField));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:SetStaticBooleanField:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, SetStaticBooleanField));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:Throw:PropertyInfo:size=%lu\n", sizeof(((struct JNINativeInterface_ *) 0)->Throw));
    printf("NativeCodeInfo:JNIHeaderDirectives:StructInfo:struct_JNINativeInterface_:StructFieldInfo:Throw:PropertyInfo:offset=%lu\n", offsetof(struct JNINativeInterface_, Throw));
    return 0;
}
