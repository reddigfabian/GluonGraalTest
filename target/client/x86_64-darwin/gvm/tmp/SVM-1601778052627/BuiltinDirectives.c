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
    printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:PropertyInfo:size=%lu\n", sizeof(graal_create_isolate_params_t));
    printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:auxiliary_image_path:PropertyInfo:size=%lu\n", sizeof(((graal_create_isolate_params_t *) 0)->auxiliary_image_path));
    printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:auxiliary_image_path:PropertyInfo:offset=%lu\n", offsetof(graal_create_isolate_params_t, auxiliary_image_path));
    printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:auxiliary_image_reserved_space_size:PropertyInfo:size=%lu\n", sizeof(((graal_create_isolate_params_t *) 0)->auxiliary_image_reserved_space_size));
    printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:auxiliary_image_reserved_space_size:PropertyInfo:offset=%lu\n", offsetof(graal_create_isolate_params_t, auxiliary_image_reserved_space_size));
    {
        graal_create_isolate_params_t tmp_graal_create_isolate_params_t_1;
        printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:auxiliary_image_reserved_space_size:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_graal_create_isolate_params_t_1.auxiliary_image_reserved_space_size)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:reserved_address_space_size:PropertyInfo:size=%lu\n", sizeof(((graal_create_isolate_params_t *) 0)->reserved_address_space_size));
    printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:reserved_address_space_size:PropertyInfo:offset=%lu\n", offsetof(graal_create_isolate_params_t, reserved_address_space_size));
    {
        graal_create_isolate_params_t tmp_graal_create_isolate_params_t_2;
        printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:reserved_address_space_size:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_graal_create_isolate_params_t_2.reserved_address_space_size)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:version:PropertyInfo:size=%lu\n", sizeof(((graal_create_isolate_params_t *) 0)->version));
    printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:version:PropertyInfo:offset=%lu\n", offsetof(graal_create_isolate_params_t, version));
    {
        graal_create_isolate_params_t tmp_graal_create_isolate_params_t_3;
        printf("NativeCodeInfo:BuiltinDirectives:StructInfo:graal_create_isolate_params_t:StructFieldInfo:version:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_graal_create_isolate_params_t_3.version)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:int:PropertyInfo:size=%lu\n", sizeof(int));
    {
        int tmp_int_4;
        printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:int:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_int_4)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:char_:PropertyInfo:size=%lu\n", sizeof(char*));
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:double:PropertyInfo:size=%lu\n", sizeof(double));
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:float:PropertyInfo:size=%lu\n", sizeof(float));
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:short:PropertyInfo:size=%lu\n", sizeof(short));
    {
        short tmp_short_5;
        printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:short:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_short_5)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:long_long:PropertyInfo:size=%lu\n", sizeof(long long));
    {
        long long tmp_long_long_6;
        printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:long_long:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_long_long_6)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:int_:PropertyInfo:size=%lu\n", sizeof(int*));
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:void_:PropertyInfo:size=%lu\n", sizeof(void*));
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:void:PropertyInfo:size=%lu\n", 1);
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:struct_JNIEnv__:PropertyInfo:size=%lu\n", sizeof(struct JNIEnv_*));
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:struct_JavaVM__:PropertyInfo:size=%lu\n", sizeof(struct JavaVM_*));
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:graal_isolate_t_:PropertyInfo:size=%lu\n", sizeof(graal_isolate_t*));
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:graal_isolatethread_t_:PropertyInfo:size=%lu\n", sizeof(graal_isolatethread_t*));
    printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:char:PropertyInfo:size=%lu\n", sizeof(char));
    {
        char tmp_char_7;
        printf("NativeCodeInfo:BuiltinDirectives:PointerToInfo:char:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_char_7)) ? "UNSIGNED" : "SIGNED");
    }
    return 0;
}
