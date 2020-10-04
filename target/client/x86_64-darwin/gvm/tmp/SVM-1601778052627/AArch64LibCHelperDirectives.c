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
#include "/Library/Java/JavaVirtualMachines/graalvm-ce-java11-20.2.0/Contents/Home/lib/svm/clibraries/darwin-amd64/include/aarch64cpufeatures.h"
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
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:PropertyInfo:size=%lu\n", sizeof(CPUFeatures));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fA53MAC:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fA53MAC));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fA53MAC:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fA53MAC));
    {
        CPUFeatures tmp_CPUFeatures_1;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fA53MAC:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_1.fA53MAC)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAES:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAES));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAES:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAES));
    {
        CPUFeatures tmp_CPUFeatures_2;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAES:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_2.fAES)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fASIMD:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fASIMD));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fASIMD:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fASIMD));
    {
        CPUFeatures tmp_CPUFeatures_3;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fASIMD:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_3.fASIMD)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCRC32:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fCRC32));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCRC32:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fCRC32));
    {
        CPUFeatures tmp_CPUFeatures_4;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCRC32:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_4.fCRC32)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fDMBATOMICS:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fDMBATOMICS));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fDMBATOMICS:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fDMBATOMICS));
    {
        CPUFeatures tmp_CPUFeatures_5;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fDMBATOMICS:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_5.fDMBATOMICS)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fEVTSTRM:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fEVTSTRM));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fEVTSTRM:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fEVTSTRM));
    {
        CPUFeatures tmp_CPUFeatures_6;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fEVTSTRM:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_6.fEVTSTRM)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fFP:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fFP));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fFP:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fFP));
    {
        CPUFeatures tmp_CPUFeatures_7;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fFP:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_7.fFP)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fLSE:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fLSE));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fLSE:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fLSE));
    {
        CPUFeatures tmp_CPUFeatures_8;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fLSE:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_8.fLSE)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fPMULL:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fPMULL));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fPMULL:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fPMULL));
    {
        CPUFeatures tmp_CPUFeatures_9;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fPMULL:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_9.fPMULL)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSHA1:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSHA1));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSHA1:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSHA1));
    {
        CPUFeatures tmp_CPUFeatures_10;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSHA1:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_10.fSHA1)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSHA2:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSHA2));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSHA2:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSHA2));
    {
        CPUFeatures tmp_CPUFeatures_11;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSHA2:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_11.fSHA2)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSTXRPREFETCH:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSTXRPREFETCH));
    printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSTXRPREFETCH:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSTXRPREFETCH));
    {
        CPUFeatures tmp_CPUFeatures_12;
        printf("NativeCodeInfo:AArch64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSTXRPREFETCH:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_12.fSTXRPREFETCH)) ? "UNSIGNED" : "SIGNED");
    }
    return 0;
}
