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
#include "/Library/Java/JavaVirtualMachines/graalvm-ce-java11-20.2.0/Contents/Home/lib/svm/clibraries/darwin-amd64/include/amd64cpufeatures.h"
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
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:PropertyInfo:size=%lu\n", sizeof(CPUFeatures));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fADX:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fADX));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fADX:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fADX));
    {
        CPUFeatures tmp_CPUFeatures_1;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fADX:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_1.fADX)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAES:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAES));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAES:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAES));
    {
        CPUFeatures tmp_CPUFeatures_2;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAES:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_2.fAES)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAMD3DNOWPREFETCH:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAMD3DNOWPREFETCH));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAMD3DNOWPREFETCH:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAMD3DNOWPREFETCH));
    {
        CPUFeatures tmp_CPUFeatures_3;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAMD3DNOWPREFETCH:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_3.fAMD3DNOWPREFETCH)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAVX));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAVX));
    {
        CPUFeatures tmp_CPUFeatures_4;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_4.fAVX)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX2:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAVX2));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX2:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAVX2));
    {
        CPUFeatures tmp_CPUFeatures_5;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX2:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_5.fAVX2)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512BW:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAVX512BW));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512BW:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAVX512BW));
    {
        CPUFeatures tmp_CPUFeatures_6;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512BW:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_6.fAVX512BW)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512CD:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAVX512CD));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512CD:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAVX512CD));
    {
        CPUFeatures tmp_CPUFeatures_7;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512CD:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_7.fAVX512CD)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512DQ:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAVX512DQ));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512DQ:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAVX512DQ));
    {
        CPUFeatures tmp_CPUFeatures_8;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512DQ:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_8.fAVX512DQ)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512ER:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAVX512ER));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512ER:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAVX512ER));
    {
        CPUFeatures tmp_CPUFeatures_9;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512ER:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_9.fAVX512ER)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512F:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAVX512F));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512F:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAVX512F));
    {
        CPUFeatures tmp_CPUFeatures_10;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512F:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_10.fAVX512F)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512PF:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fAVX512PF));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512PF:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fAVX512PF));
    {
        CPUFeatures tmp_CPUFeatures_11;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fAVX512PF:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_11.fAVX512PF)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fBMI1:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fBMI1));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fBMI1:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fBMI1));
    {
        CPUFeatures tmp_CPUFeatures_12;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fBMI1:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_12.fBMI1)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fBMI2:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fBMI2));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fBMI2:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fBMI2));
    {
        CPUFeatures tmp_CPUFeatures_13;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fBMI2:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_13.fBMI2)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCLMUL:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fCLMUL));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCLMUL:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fCLMUL));
    {
        CPUFeatures tmp_CPUFeatures_14;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCLMUL:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_14.fCLMUL)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCMOV:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fCMOV));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCMOV:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fCMOV));
    {
        CPUFeatures tmp_CPUFeatures_15;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCMOV:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_15.fCMOV)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCX8:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fCX8));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCX8:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fCX8));
    {
        CPUFeatures tmp_CPUFeatures_16;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fCX8:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_16.fCX8)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fERMS:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fERMS));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fERMS:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fERMS));
    {
        CPUFeatures tmp_CPUFeatures_17;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fERMS:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_17.fERMS)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fFMA:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fFMA));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fFMA:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fFMA));
    {
        CPUFeatures tmp_CPUFeatures_18;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fFMA:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_18.fFMA)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fFXSR:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fFXSR));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fFXSR:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fFXSR));
    {
        CPUFeatures tmp_CPUFeatures_19;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fFXSR:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_19.fFXSR)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fHT:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fHT));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fHT:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fHT));
    {
        CPUFeatures tmp_CPUFeatures_20;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fHT:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_20.fHT)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fLZCNT:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fLZCNT));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fLZCNT:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fLZCNT));
    {
        CPUFeatures tmp_CPUFeatures_21;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fLZCNT:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_21.fLZCNT)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fMMX:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fMMX));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fMMX:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fMMX));
    {
        CPUFeatures tmp_CPUFeatures_22;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fMMX:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_22.fMMX)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fPOPCNT:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fPOPCNT));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fPOPCNT:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fPOPCNT));
    {
        CPUFeatures tmp_CPUFeatures_23;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fPOPCNT:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_23.fPOPCNT)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fRTM:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fRTM));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fRTM:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fRTM));
    {
        CPUFeatures tmp_CPUFeatures_24;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fRTM:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_24.fRTM)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSHA:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSHA));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSHA:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSHA));
    {
        CPUFeatures tmp_CPUFeatures_25;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSHA:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_25.fSHA)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSSE));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSSE));
    {
        CPUFeatures tmp_CPUFeatures_26;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_26.fSSE)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE2:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSSE2));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE2:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSSE2));
    {
        CPUFeatures tmp_CPUFeatures_27;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE2:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_27.fSSE2)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE3:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSSE3));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE3:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSSE3));
    {
        CPUFeatures tmp_CPUFeatures_28;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE3:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_28.fSSE3)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE41:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSSE41));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE41:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSSE41));
    {
        CPUFeatures tmp_CPUFeatures_29;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE41:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_29.fSSE41)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE42:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSSE42));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE42:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSSE42));
    {
        CPUFeatures tmp_CPUFeatures_30;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE42:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_30.fSSE42)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE4A:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSSE4A));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE4A:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSSE4A));
    {
        CPUFeatures tmp_CPUFeatures_31;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSE4A:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_31.fSSE4A)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSSE3:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fSSSE3));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSSE3:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fSSSE3));
    {
        CPUFeatures tmp_CPUFeatures_32;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fSSSE3:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_32.fSSSE3)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fTSC:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fTSC));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fTSC:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fTSC));
    {
        CPUFeatures tmp_CPUFeatures_33;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fTSC:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_33.fTSC)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fTSCINV:PropertyInfo:size=%lu\n", sizeof(((CPUFeatures *) 0)->fTSCINV));
    printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fTSCINV:PropertyInfo:offset=%lu\n", offsetof(CPUFeatures, fTSCINV));
    {
        CPUFeatures tmp_CPUFeatures_34;
        printf("NativeCodeInfo:AMD64LibCHelperDirectives:StructInfo:CPUFeatures:StructFieldInfo:fTSCINV:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_CPUFeatures_34.fTSCINV)) ? "UNSIGNED" : "SIGNED");
    }
    return 0;
}
