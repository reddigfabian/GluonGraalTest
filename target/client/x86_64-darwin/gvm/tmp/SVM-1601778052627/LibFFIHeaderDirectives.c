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
#include <svm_libffi.h>
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
    printf("NativeCodeInfo:LibFFIHeaderDirectives:ConstantInfo:FFI_OK:PropertyInfo:size=%lu\n", sizeof(FFI_OK));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:ConstantInfo:FFI_OK:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(FFI_OK)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:LibFFIHeaderDirectives:ConstantInfo:FFI_OK:PropertyInfo:value=%lX\n", FFI_OK);
    printf("NativeCodeInfo:LibFFIHeaderDirectives:ConstantInfo:FFI_DEFAULT_ABI:PropertyInfo:size=%lu\n", sizeof(FFI_DEFAULT_ABI));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:ConstantInfo:FFI_DEFAULT_ABI:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(FFI_DEFAULT_ABI)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:LibFFIHeaderDirectives:ConstantInfo:FFI_DEFAULT_ABI:PropertyInfo:value=%lX\n", FFI_DEFAULT_ABI);
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_type:PropertyInfo:size=%lu\n", sizeof(ffi_type));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_type:StructFieldInfo:alignment:PropertyInfo:size=%lu\n", sizeof(((ffi_type *) 0)->alignment));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_type:StructFieldInfo:alignment:PropertyInfo:offset=%lu\n", offsetof(ffi_type, alignment));
    {
        ffi_type tmp_ffi_type_1;
        printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_type:StructFieldInfo:alignment:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_ffi_type_1.alignment)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_type:StructFieldInfo:size:PropertyInfo:size=%lu\n", sizeof(((ffi_type *) 0)->size));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_type:StructFieldInfo:size:PropertyInfo:offset=%lu\n", offsetof(ffi_type, size));
    {
        ffi_type tmp_ffi_type_2;
        printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_type:StructFieldInfo:size:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_ffi_type_2.size)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_arg:PropertyInfo:size=%lu\n", sizeof(ffi_arg));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_cif_data:PropertyInfo:size=%lu\n", sizeof(svm_cif_data));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_cif_data:StructFieldInfo:args:PropertyInfo:size=%lu\n", sizeof(((svm_cif_data *) 0)->args));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_cif_data:StructFieldInfo:args:PropertyInfo:offset=%lu\n", offsetof(svm_cif_data, args));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_cif_data:StructFieldInfo:cif:PropertyInfo:size=%lu\n", sizeof(((svm_cif_data *) 0)->cif));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_cif_data:StructFieldInfo:cif:PropertyInfo:offset=%lu\n", offsetof(svm_cif_data, cif));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_closure:PropertyInfo:size=%lu\n", sizeof(ffi_closure));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:PropertyInfo:size=%lu\n", sizeof(svm_truffle_context));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:StructFieldInfo:contextHandle:PropertyInfo:size=%lu\n", sizeof(((svm_truffle_context *) 0)->contextHandle));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:StructFieldInfo:contextHandle:PropertyInfo:offset=%lu\n", offsetof(svm_truffle_context, contextHandle));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:StructFieldInfo:functions:PropertyInfo:size=%lu\n", sizeof(((svm_truffle_context *) 0)->functions));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:StructFieldInfo:functions:PropertyInfo:offset=%lu\n", offsetof(svm_truffle_context, functions));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:StructFieldInfo:isolate:PropertyInfo:size=%lu\n", sizeof(((svm_truffle_context *) 0)->isolate));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:StructFieldInfo:isolate:PropertyInfo:offset=%lu\n", offsetof(svm_truffle_context, isolate));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:StructFieldInfo:nativeAPI:PropertyInfo:size=%lu\n", sizeof(((svm_truffle_context *) 0)->nativeAPI));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:StructFieldInfo:nativeAPI:PropertyInfo:offset=%lu\n", offsetof(svm_truffle_context, nativeAPI));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:StructFieldInfo:threadAPI:PropertyInfo:size=%lu\n", sizeof(((svm_truffle_context *) 0)->threadAPI));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_context:StructFieldInfo:threadAPI:PropertyInfo:offset=%lu\n", offsetof(svm_truffle_context, threadAPI));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:PropertyInfo:size=%lu\n", sizeof(struct __TruffleNativeAPI));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:getClosureObject:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleNativeAPI *) 0)->getClosureObject));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:getClosureObject:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleNativeAPI, getClosureObject));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:getTruffleContext:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleNativeAPI *) 0)->getTruffleContext));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:getTruffleContext:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleNativeAPI, getTruffleContext));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:isSameObject:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleNativeAPI *) 0)->isSameObject));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:isSameObject:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleNativeAPI, isSameObject));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:newClosureRef:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleNativeAPI *) 0)->newClosureRef));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:newClosureRef:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleNativeAPI, newClosureRef));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:newObjectRef:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleNativeAPI *) 0)->newObjectRef));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:newObjectRef:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleNativeAPI, newObjectRef));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:releaseAndReturn:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleNativeAPI *) 0)->releaseAndReturn));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:releaseAndReturn:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleNativeAPI, releaseAndReturn));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:releaseClosureRef:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleNativeAPI *) 0)->releaseClosureRef));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:releaseClosureRef:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleNativeAPI, releaseClosureRef));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:releaseObjectRef:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleNativeAPI *) 0)->releaseObjectRef));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleNativeAPI:StructFieldInfo:releaseObjectRef:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleNativeAPI, releaseObjectRef));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_closure_data:PropertyInfo:size=%lu\n", sizeof(svm_closure_data));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_closure_data:StructFieldInfo:ffiClosure:PropertyInfo:size=%lu\n", sizeof(((svm_closure_data *) 0)->ffiClosure));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_closure_data:StructFieldInfo:ffiClosure:PropertyInfo:offset=%lu\n", offsetof(svm_closure_data, ffiClosure));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_closure_data:StructFieldInfo:isolate:PropertyInfo:size=%lu\n", sizeof(((svm_closure_data *) 0)->isolate));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_closure_data:StructFieldInfo:isolate:PropertyInfo:offset=%lu\n", offsetof(svm_closure_data, isolate));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_closure_data:StructFieldInfo:nativeClosureHandle:PropertyInfo:size=%lu\n", sizeof(((svm_closure_data *) 0)->nativeClosureHandle));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_closure_data:StructFieldInfo:nativeClosureHandle:PropertyInfo:offset=%lu\n", offsetof(svm_closure_data, nativeClosureHandle));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_env:PropertyInfo:size=%lu\n", sizeof(svm_truffle_env));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_env:StructFieldInfo:context:PropertyInfo:size=%lu\n", sizeof(((svm_truffle_env *) 0)->context));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_env:StructFieldInfo:context:PropertyInfo:offset=%lu\n", offsetof(svm_truffle_env, context));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_env:StructFieldInfo:functions:PropertyInfo:size=%lu\n", sizeof(((svm_truffle_env *) 0)->functions));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_env:StructFieldInfo:functions:PropertyInfo:offset=%lu\n", offsetof(svm_truffle_env, functions));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_env:StructFieldInfo:isolateThread:PropertyInfo:size=%lu\n", sizeof(((svm_truffle_env *) 0)->isolateThread));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:svm_truffle_env:StructFieldInfo:isolateThread:PropertyInfo:offset=%lu\n", offsetof(svm_truffle_env, isolateThread));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleThreadAPI:PropertyInfo:size=%lu\n", sizeof(struct __TruffleThreadAPI));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleThreadAPI:StructFieldInfo:attachCurrentThread:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleThreadAPI *) 0)->attachCurrentThread));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleThreadAPI:StructFieldInfo:attachCurrentThread:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleThreadAPI, attachCurrentThread));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleThreadAPI:StructFieldInfo:detachCurrentThread:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleThreadAPI *) 0)->detachCurrentThread));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleThreadAPI:StructFieldInfo:detachCurrentThread:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleThreadAPI, detachCurrentThread));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleThreadAPI:StructFieldInfo:getTruffleEnv:PropertyInfo:size=%lu\n", sizeof(((struct __TruffleThreadAPI *) 0)->getTruffleEnv));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:struct___TruffleThreadAPI:StructFieldInfo:getTruffleEnv:PropertyInfo:offset=%lu\n", offsetof(struct __TruffleThreadAPI, getTruffleEnv));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_cif:PropertyInfo:size=%lu\n", sizeof(ffi_cif));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_cif:StructFieldInfo:arg_types:PropertyInfo:size=%lu\n", sizeof(((ffi_cif *) 0)->arg_types));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_cif:StructFieldInfo:arg_types:PropertyInfo:offset=%lu\n", offsetof(ffi_cif, arg_types));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_cif:StructFieldInfo:nargs:PropertyInfo:size=%lu\n", sizeof(((ffi_cif *) 0)->nargs));
    printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_cif:StructFieldInfo:nargs:PropertyInfo:offset=%lu\n", offsetof(ffi_cif, nargs));
    {
        ffi_cif tmp_ffi_cif_3;
        printf("NativeCodeInfo:LibFFIHeaderDirectives:StructInfo:ffi_cif:StructFieldInfo:nargs:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_ffi_cif_3.nargs)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:LibFFIHeaderDirectives:PointerToInfo:ffi_type_:PropertyInfo:size=%lu\n", sizeof(ffi_type*));
    return 0;
}
