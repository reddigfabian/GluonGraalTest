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
#define _GNU_SOURCE
#define _LARGEFILE64_SOURCE
#include <dlfcn.h>
#include <fcntl.h>
#include <limits.h>
#include <locale.h>
#include <pthread.h>
#include <pwd.h>
#include <signal.h>
#include <sys/errno.h>
#include <sys/mman.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/times.h>
#include <sys/utsname.h>
#include <time.h>
#include <unistd.h>
#include <Foundation/Foundation.h>
#include <mach/mach.h>
#include <mach/mach_time.h>
#include <mach-o/dyld.h>
#include <sys/sysctl.h>
#include <sys/syslimits.h>
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
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:OPEN_MAX:PropertyInfo:size=%lu\n", sizeof(OPEN_MAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:OPEN_MAX:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(OPEN_MAX)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:OPEN_MAX:PropertyInfo:value=%lX\n", OPEN_MAX);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CTL_HW:PropertyInfo:size=%lu\n", sizeof(CTL_HW));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CTL_HW:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(CTL_HW)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CTL_HW:PropertyInfo:value=%lX\n", CTL_HW);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:HW_MEMSIZE:PropertyInfo:size=%lu\n", sizeof(HW_MEMSIZE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:HW_MEMSIZE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(HW_MEMSIZE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:HW_MEMSIZE:PropertyInfo:value=%lX\n", HW_MEMSIZE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:KIPC_MAXSOCKBUF:PropertyInfo:size=%lu\n", sizeof(KIPC_MAXSOCKBUF));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:KIPC_MAXSOCKBUF:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(KIPC_MAXSOCKBUF)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:KIPC_MAXSOCKBUF:PropertyInfo:value=%lX\n", KIPC_MAXSOCKBUF);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CTL_KERN:PropertyInfo:size=%lu\n", sizeof(CTL_KERN));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CTL_KERN:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(CTL_KERN)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CTL_KERN:PropertyInfo:value=%lX\n", CTL_KERN);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:KERN_IPC:PropertyInfo:size=%lu\n", sizeof(KERN_IPC));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:KERN_IPC:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(KERN_IPC)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:KERN_IPC:PropertyInfo:value=%lX\n", KERN_IPC);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_CS_DARWIN_USER_TEMP_DIR:PropertyInfo:size=%lu\n", sizeof(_CS_DARWIN_USER_TEMP_DIR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_CS_DARWIN_USER_TEMP_DIR:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(_CS_DARWIN_USER_TEMP_DIR)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_CS_DARWIN_USER_TEMP_DIR:PropertyInfo:value=%lX\n", _CS_DARWIN_USER_TEMP_DIR);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGESIZE:PropertyInfo:size=%lu\n", sizeof(_SC_PAGESIZE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGESIZE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(_SC_PAGESIZE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGESIZE:PropertyInfo:value=%lX\n", _SC_PAGESIZE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_SET:PropertyInfo:size=%lu\n", sizeof(SEEK_SET));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_SET:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SEEK_SET)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_SET:PropertyInfo:value=%lX\n", SEEK_SET);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_CLK_TCK:PropertyInfo:size=%lu\n", sizeof(_SC_CLK_TCK));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_CLK_TCK:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(_SC_CLK_TCK)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_CLK_TCK:PropertyInfo:value=%lX\n", _SC_CLK_TCK);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_CUR:PropertyInfo:size=%lu\n", sizeof(SEEK_CUR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_CUR:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SEEK_CUR)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_CUR:PropertyInfo:value=%lX\n", SEEK_CUR);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGE_SIZE:PropertyInfo:size=%lu\n", sizeof(_SC_PAGE_SIZE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGE_SIZE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(_SC_PAGE_SIZE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGE_SIZE:PropertyInfo:value=%lX\n", _SC_PAGE_SIZE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_BLOCK:PropertyInfo:size=%lu\n", sizeof(SIG_BLOCK));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_BLOCK:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIG_BLOCK)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_BLOCK:PropertyInfo:value=%lX\n", SIG_BLOCK);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_UNBLOCK:PropertyInfo:size=%lu\n", sizeof(SIG_UNBLOCK));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_UNBLOCK:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIG_UNBLOCK)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_UNBLOCK:PropertyInfo:value=%lX\n", SIG_UNBLOCK);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_SETMASK:PropertyInfo:size=%lu\n", sizeof(SIG_SETMASK));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_SETMASK:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIG_SETMASK)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_SETMASK:PropertyInfo:value=%lX\n", SIG_SETMASK);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_ERR:PropertyInfo:size=%lu\n", sizeof(SIG_ERR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_ERR:PropertyInfo:value=%lX\n", SIG_ERR);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_SIGINFO:PropertyInfo:size=%lu\n", sizeof(SA_SIGINFO));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_SIGINFO:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SA_SIGINFO)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_SIGINFO:PropertyInfo:value=%lX\n", SA_SIGINFO);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_DFL:PropertyInfo:size=%lu\n", sizeof(SIG_DFL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_DFL:PropertyInfo:value=%lX\n", SIG_DFL);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_IGN:PropertyInfo:size=%lu\n", sizeof(SIG_IGN));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_IGN:PropertyInfo:value=%lX\n", SIG_IGN);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_CREATE_JOINABLE:PropertyInfo:size=%lu\n", sizeof(PTHREAD_CREATE_JOINABLE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_CREATE_JOINABLE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(PTHREAD_CREATE_JOINABLE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_CREATE_JOINABLE:PropertyInfo:value=%lX\n", PTHREAD_CREATE_JOINABLE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_STACK_MIN:PropertyInfo:size=%lu\n", sizeof(PTHREAD_STACK_MIN));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_STACK_MIN:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(PTHREAD_STACK_MIN)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_STACK_MIN:PropertyInfo:value=%lX\n", PTHREAD_STACK_MIN);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_RDONLY:PropertyInfo:size=%lu\n", sizeof(O_RDONLY));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_RDONLY:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(O_RDONLY)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_RDONLY:PropertyInfo:value=%lX\n", O_RDONLY);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EPERM:PropertyInfo:size=%lu\n", sizeof(EPERM));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EPERM:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(EPERM)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EPERM:PropertyInfo:value=%lX\n", EPERM);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ESRCH:PropertyInfo:size=%lu\n", sizeof(ESRCH));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ESRCH:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(ESRCH)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ESRCH:PropertyInfo:value=%lX\n", ESRCH);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EINTR:PropertyInfo:size=%lu\n", sizeof(EINTR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EINTR:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(EINTR)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EINTR:PropertyInfo:value=%lX\n", EINTR);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBADF:PropertyInfo:size=%lu\n", sizeof(EBADF));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBADF:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(EBADF)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBADF:PropertyInfo:value=%lX\n", EBADF);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ECHILD:PropertyInfo:size=%lu\n", sizeof(ECHILD));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ECHILD:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(ECHILD)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ECHILD:PropertyInfo:value=%lX\n", ECHILD);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBUSY:PropertyInfo:size=%lu\n", sizeof(EBUSY));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBUSY:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(EBUSY)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBUSY:PropertyInfo:value=%lX\n", EBUSY);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ETIMEDOUT:PropertyInfo:size=%lu\n", sizeof(ETIMEDOUT));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ETIMEDOUT:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(ETIMEDOUT)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ETIMEDOUT:PropertyInfo:value=%lX\n", ETIMEDOUT);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RLIMIT_NOFILE:PropertyInfo:size=%lu\n", sizeof(RLIMIT_NOFILE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RLIMIT_NOFILE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(RLIMIT_NOFILE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RLIMIT_NOFILE:PropertyInfo:value=%lX\n", RLIMIT_NOFILE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_PRIVATE:PropertyInfo:size=%lu\n", sizeof(MAP_PRIVATE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_PRIVATE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(MAP_PRIVATE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_PRIVATE:PropertyInfo:value=%lX\n", MAP_PRIVATE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_READ:PropertyInfo:size=%lu\n", sizeof(PROT_READ));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_READ:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(PROT_READ)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_READ:PropertyInfo:value=%lX\n", PROT_READ);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_WRITE:PropertyInfo:size=%lu\n", sizeof(PROT_WRITE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_WRITE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(PROT_WRITE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_WRITE:PropertyInfo:value=%lX\n", PROT_WRITE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_EXEC:PropertyInfo:size=%lu\n", sizeof(PROT_EXEC));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_EXEC:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(PROT_EXEC)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_EXEC:PropertyInfo:value=%lX\n", PROT_EXEC);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_NONE:PropertyInfo:size=%lu\n", sizeof(PROT_NONE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_NONE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(PROT_NONE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_NONE:PropertyInfo:value=%lX\n", PROT_NONE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_SHARED:PropertyInfo:size=%lu\n", sizeof(MAP_SHARED));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_SHARED:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(MAP_SHARED)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_SHARED:PropertyInfo:value=%lX\n", MAP_SHARED);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_FIXED:PropertyInfo:size=%lu\n", sizeof(MAP_FIXED));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_FIXED:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(MAP_FIXED)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_FIXED:PropertyInfo:value=%lX\n", MAP_FIXED);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_ANON:PropertyInfo:size=%lu\n", sizeof(MAP_ANON));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_ANON:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(MAP_ANON)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_ANON:PropertyInfo:value=%lX\n", MAP_ANON);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_NORESERVE:PropertyInfo:size=%lu\n", sizeof(MAP_NORESERVE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_NORESERVE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(MAP_NORESERVE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_NORESERVE:PropertyInfo:value=%lX\n", MAP_NORESERVE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_FAILED:PropertyInfo:size=%lu\n", sizeof(MAP_FAILED));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_FAILED:PropertyInfo:value=%lX\n", MAP_FAILED);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:NAME_MAX:PropertyInfo:size=%lu\n", sizeof(NAME_MAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:NAME_MAX:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(NAME_MAX)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:NAME_MAX:PropertyInfo:value=%lX\n", NAME_MAX);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:size=%lu\n", sizeof(PATH_MAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(PATH_MAX)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:value=%lX\n", PATH_MAX);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:size=%lu\n", sizeof(PATH_MAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(PATH_MAX)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:value=%lX\n", PATH_MAX);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_ALL:PropertyInfo:size=%lu\n", sizeof(LC_ALL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_ALL:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(LC_ALL)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_ALL:PropertyInfo:value=%lX\n", LC_ALL);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MONETARY:PropertyInfo:size=%lu\n", sizeof(LC_MONETARY));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MONETARY:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(LC_MONETARY)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MONETARY:PropertyInfo:value=%lX\n", LC_MONETARY);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_COLLATE:PropertyInfo:size=%lu\n", sizeof(LC_COLLATE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_COLLATE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(LC_COLLATE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_COLLATE:PropertyInfo:value=%lX\n", LC_COLLATE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_CTYPE:PropertyInfo:size=%lu\n", sizeof(LC_CTYPE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_CTYPE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(LC_CTYPE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_CTYPE:PropertyInfo:value=%lX\n", LC_CTYPE);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_NUMERIC:PropertyInfo:size=%lu\n", sizeof(LC_NUMERIC));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_NUMERIC:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(LC_NUMERIC)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_NUMERIC:PropertyInfo:value=%lX\n", LC_NUMERIC);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_TIME:PropertyInfo:size=%lu\n", sizeof(LC_TIME));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_TIME:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(LC_TIME)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_TIME:PropertyInfo:value=%lX\n", LC_TIME);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MESSAGES:PropertyInfo:size=%lu\n", sizeof(LC_MESSAGES));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MESSAGES:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(LC_MESSAGES)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MESSAGES:PropertyInfo:value=%lX\n", LC_MESSAGES);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_GLOBAL:PropertyInfo:size=%lu\n", sizeof(RTLD_GLOBAL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_GLOBAL:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(RTLD_GLOBAL)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_GLOBAL:PropertyInfo:value=%lX\n", RTLD_GLOBAL);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LOCAL:PropertyInfo:size=%lu\n", sizeof(RTLD_LOCAL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LOCAL:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(RTLD_LOCAL)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LOCAL:PropertyInfo:value=%lX\n", RTLD_LOCAL);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LAZY:PropertyInfo:size=%lu\n", sizeof(RTLD_LAZY));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LAZY:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(RTLD_LAZY)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LAZY:PropertyInfo:value=%lX\n", RTLD_LAZY);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_NOW:PropertyInfo:size=%lu\n", sizeof(RTLD_NOW));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_NOW:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(RTLD_NOW)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_NOW:PropertyInfo:value=%lX\n", RTLD_NOW);
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_DEFAULT:PropertyInfo:size=%lu\n", sizeof(RTLD_DEFAULT));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_DEFAULT:PropertyInfo:value=%lX\n", RTLD_DEFAULT);
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:PropertyInfo:size=%lu\n", sizeof(struct utsname));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:machine:PropertyInfo:size=%lu\n", sizeof(((struct utsname *) 0)->machine));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:machine:PropertyInfo:offset=%lu\n", offsetof(struct utsname, machine));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:nodename:PropertyInfo:size=%lu\n", sizeof(((struct utsname *) 0)->nodename));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:nodename:PropertyInfo:offset=%lu\n", offsetof(struct utsname, nodename));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:release:PropertyInfo:size=%lu\n", sizeof(((struct utsname *) 0)->release));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:release:PropertyInfo:offset=%lu\n", offsetof(struct utsname, release));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:sysname:PropertyInfo:size=%lu\n", sizeof(((struct utsname *) 0)->sysname));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:sysname:PropertyInfo:offset=%lu\n", offsetof(struct utsname, sysname));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:version:PropertyInfo:size=%lu\n", sizeof(((struct utsname *) 0)->version));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:version:PropertyInfo:offset=%lu\n", offsetof(struct utsname, version));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:PropertyInfo:size=%lu\n", sizeof(struct stat64));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_size:PropertyInfo:size=%lu\n", sizeof(((struct stat64 *) 0)->st_size));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_size:PropertyInfo:offset=%lu\n", offsetof(struct stat64, st_size));
    {
        struct stat64 tmp_struct_stat64_1;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_size:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_stat64_1.st_size)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:PropertyInfo:size=%lu\n", sizeof(struct tms));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cstime:PropertyInfo:size=%lu\n", sizeof(((struct tms *) 0)->tms_cstime));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cstime:PropertyInfo:offset=%lu\n", offsetof(struct tms, tms_cstime));
    {
        struct tms tmp_struct_tms_2;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cstime:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_tms_2.tms_cstime)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cutime:PropertyInfo:size=%lu\n", sizeof(((struct tms *) 0)->tms_cutime));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cutime:PropertyInfo:offset=%lu\n", offsetof(struct tms, tms_cutime));
    {
        struct tms tmp_struct_tms_3;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cutime:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_tms_3.tms_cutime)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_stime:PropertyInfo:size=%lu\n", sizeof(((struct tms *) 0)->tms_stime));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_stime:PropertyInfo:offset=%lu\n", offsetof(struct tms, tms_stime));
    {
        struct tms tmp_struct_tms_4;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_stime:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_tms_4.tms_stime)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_utime:PropertyInfo:size=%lu\n", sizeof(((struct tms *) 0)->tms_utime));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_utime:PropertyInfo:offset=%lu\n", offsetof(struct tms, tms_utime));
    {
        struct tms tmp_struct_tms_5;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_utime:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_tms_5.tms_utime)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:PropertyInfo:size=%lu\n", sizeof(Dl_info));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_fbase:PropertyInfo:size=%lu\n", sizeof(((Dl_info *) 0)->dli_fbase));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_fbase:PropertyInfo:offset=%lu\n", offsetof(Dl_info, dli_fbase));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_fname:PropertyInfo:size=%lu\n", sizeof(((Dl_info *) 0)->dli_fname));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_fname:PropertyInfo:offset=%lu\n", offsetof(Dl_info, dli_fname));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_saddr:PropertyInfo:size=%lu\n", sizeof(((Dl_info *) 0)->dli_saddr));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_saddr:PropertyInfo:offset=%lu\n", offsetof(Dl_info, dli_saddr));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_sname:PropertyInfo:size=%lu\n", sizeof(((Dl_info *) 0)->dli_sname));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_sname:PropertyInfo:offset=%lu\n", offsetof(Dl_info, dli_sname));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:PropertyInfo:size=%lu\n", sizeof(struct sigaction));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_flags:PropertyInfo:size=%lu\n", sizeof(((struct sigaction *) 0)->sa_flags));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_flags:PropertyInfo:offset=%lu\n", offsetof(struct sigaction, sa_flags));
    {
        struct sigaction tmp_struct_sigaction_6;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_flags:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_sigaction_6.sa_flags)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_handler:PropertyInfo:size=%lu\n", sizeof(((struct sigaction *) 0)->sa_handler));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_handler:PropertyInfo:offset=%lu\n", offsetof(struct sigaction, sa_handler));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_mask:PropertyInfo:size=%lu\n", sizeof(((struct sigaction *) 0)->sa_mask));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_mask:PropertyInfo:offset=%lu\n", offsetof(struct sigaction, sa_mask));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_sigaction:PropertyInfo:size=%lu\n", sizeof(((struct sigaction *) 0)->sa_sigaction));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_sigaction:PropertyInfo:offset=%lu\n", offsetof(struct sigaction, sa_sigaction));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:NSOperatingSystemVersion:PropertyInfo:size=%lu\n", sizeof(NSOperatingSystemVersion));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:NSOperatingSystemVersion:StructFieldInfo:majorVersion:PropertyInfo:size=%lu\n", sizeof(((NSOperatingSystemVersion *) 0)->majorVersion));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:NSOperatingSystemVersion:StructFieldInfo:majorVersion:PropertyInfo:offset=%lu\n", offsetof(NSOperatingSystemVersion, majorVersion));
    {
        NSOperatingSystemVersion tmp_NSOperatingSystemVersion_7;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:NSOperatingSystemVersion:StructFieldInfo:majorVersion:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_NSOperatingSystemVersion_7.majorVersion)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:NSOperatingSystemVersion:StructFieldInfo:minorVersion:PropertyInfo:size=%lu\n", sizeof(((NSOperatingSystemVersion *) 0)->minorVersion));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:NSOperatingSystemVersion:StructFieldInfo:minorVersion:PropertyInfo:offset=%lu\n", offsetof(NSOperatingSystemVersion, minorVersion));
    {
        NSOperatingSystemVersion tmp_NSOperatingSystemVersion_8;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:NSOperatingSystemVersion:StructFieldInfo:minorVersion:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_NSOperatingSystemVersion_8.minorVersion)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:NSOperatingSystemVersion:StructFieldInfo:patchVersion:PropertyInfo:size=%lu\n", sizeof(((NSOperatingSystemVersion *) 0)->patchVersion));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:NSOperatingSystemVersion:StructFieldInfo:patchVersion:PropertyInfo:offset=%lu\n", offsetof(NSOperatingSystemVersion, patchVersion));
    {
        NSOperatingSystemVersion tmp_NSOperatingSystemVersion_9;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:NSOperatingSystemVersion:StructFieldInfo:patchVersion:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_NSOperatingSystemVersion_9.patchVersion)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:pthread_mutex_t:PropertyInfo:size=%lu\n", sizeof(pthread_mutex_t));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:pthread_cond_t:PropertyInfo:size=%lu\n", sizeof(pthread_cond_t));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:pthread_condattr_t:PropertyInfo:size=%lu\n", sizeof(pthread_condattr_t));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:ucontext_t:PropertyInfo:size=%lu\n", sizeof(ucontext_t));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:ucontext_t:StructFieldInfo:uc_mcontext:PropertyInfo:size=%lu\n", sizeof(((ucontext_t *) 0)->uc_mcontext));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:ucontext_t:StructFieldInfo:uc_mcontext:PropertyInfo:offset=%lu\n", offsetof(ucontext_t, uc_mcontext));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:PropertyInfo:size=%lu\n", sizeof(struct __darwin_mcontext64));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r10:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__r10));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r10:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__r10));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r11:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__r11));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r11:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__r11));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r12:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__r12));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r12:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__r12));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r13:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__r13));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r13:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__r13));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r14:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__r14));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r14:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__r14));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r15:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__r15));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r15:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__r15));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r8:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__r8));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r8:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__r8));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r9:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__r9));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___r9:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__r9));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rax:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__rax));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rax:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__rax));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rbp:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__rbp));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rbp:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__rbp));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rbx:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__rbx));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rbx:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__rbx));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rcx:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__rcx));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rcx:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__rcx));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rdi:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__rdi));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rdi:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__rdi));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rdx:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__rdx));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rdx:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__rdx));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rflags:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__rflags));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rflags:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__rflags));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rip:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__rip));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rip:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__rip));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rsi:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__rsi));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rsi:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__rsi));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rsp:PropertyInfo:size=%lu\n", sizeof(((struct __darwin_mcontext64 *) 0)->__ss.__rsp));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct___darwin_mcontext64:StructFieldInfo:__ss___rsp:PropertyInfo:offset=%lu\n", offsetof(struct __darwin_mcontext64, __ss.__rsp));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:PropertyInfo:size=%lu\n", sizeof(struct timespec));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_nsec:PropertyInfo:size=%lu\n", sizeof(((struct timespec *) 0)->tv_nsec));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_nsec:PropertyInfo:offset=%lu\n", offsetof(struct timespec, tv_nsec));
    {
        struct timespec tmp_struct_timespec_10;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_nsec:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_timespec_10.tv_nsec)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_sec:PropertyInfo:size=%lu\n", sizeof(((struct timespec *) 0)->tv_sec));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_sec:PropertyInfo:offset=%lu\n", offsetof(struct timespec, tv_sec));
    {
        struct timespec tmp_struct_timespec_11;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_sec:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_timespec_11.tv_sec)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:PropertyInfo:size=%lu\n", sizeof(siginfo_t));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:pthread_attr_t:PropertyInfo:size=%lu\n", sizeof(pthread_attr_t));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_passwd:PropertyInfo:size=%lu\n", sizeof(struct passwd));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_passwd:StructFieldInfo:pw_dir:PropertyInfo:size=%lu\n", sizeof(((struct passwd *) 0)->pw_dir));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_passwd:StructFieldInfo:pw_dir:PropertyInfo:offset=%lu\n", offsetof(struct passwd, pw_dir));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_passwd:StructFieldInfo:pw_name:PropertyInfo:size=%lu\n", sizeof(((struct passwd *) 0)->pw_name));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_passwd:StructFieldInfo:pw_name:PropertyInfo:offset=%lu\n", offsetof(struct passwd, pw_name));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_mach_timebase_info:PropertyInfo:size=%lu\n", sizeof(struct mach_timebase_info));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_mach_timebase_info:StructFieldInfo:denom:PropertyInfo:size=%lu\n", sizeof(((struct mach_timebase_info *) 0)->denom));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_mach_timebase_info:StructFieldInfo:denom:PropertyInfo:offset=%lu\n", offsetof(struct mach_timebase_info, denom));
    {
        struct mach_timebase_info tmp_struct_mach_timebase_info_12;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_mach_timebase_info:StructFieldInfo:denom:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_mach_timebase_info_12.denom)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_mach_timebase_info:StructFieldInfo:numer:PropertyInfo:size=%lu\n", sizeof(((struct mach_timebase_info *) 0)->numer));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_mach_timebase_info:StructFieldInfo:numer:PropertyInfo:offset=%lu\n", offsetof(struct mach_timebase_info, numer));
    {
        struct mach_timebase_info tmp_struct_mach_timebase_info_13;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_mach_timebase_info:StructFieldInfo:numer:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_mach_timebase_info_13.numer)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:PropertyInfo:size=%lu\n", sizeof(struct rlimit));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_cur:PropertyInfo:size=%lu\n", sizeof(((struct rlimit *) 0)->rlim_cur));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_cur:PropertyInfo:offset=%lu\n", offsetof(struct rlimit, rlim_cur));
    {
        struct rlimit tmp_struct_rlimit_14;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_cur:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_rlimit_14.rlim_cur)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_max:PropertyInfo:size=%lu\n", sizeof(((struct rlimit *) 0)->rlim_max));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_max:PropertyInfo:offset=%lu\n", offsetof(struct rlimit, rlim_max));
    {
        struct rlimit tmp_struct_rlimit_15;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_max:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_rlimit_15.rlim_max)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:PropertyInfo:size=%lu\n", sizeof(struct timeval));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_sec:PropertyInfo:size=%lu\n", sizeof(((struct timeval *) 0)->tv_sec));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_sec:PropertyInfo:offset=%lu\n", offsetof(struct timeval, tv_sec));
    {
        struct timeval tmp_struct_timeval_16;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_sec:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_timeval_16.tv_sec)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_usec:PropertyInfo:size=%lu\n", sizeof(((struct timeval *) 0)->tv_usec));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_usec:PropertyInfo:offset=%lu\n", offsetof(struct timeval, tv_usec));
    {
        struct timeval tmp_struct_timeval_17;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_usec:PropertyInfo:signedness=$%s$\n", (ISUNSIGNED(tmp_struct_timeval_17.tv_usec)) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:PointerToInfo:pthread_t:PropertyInfo:size=%lu\n", sizeof(pthread_t));
    printf("NativeCodeInfo:PosixDirectives:PointerToInfo:sigset_t:PropertyInfo:size=%lu\n", sizeof(sigset_t));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGABRT:PropertyInfo:size=%lu\n", sizeof(SIGABRT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGABRT:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGABRT)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGABRT:PropertyInfo:value=%lX\n", SIGABRT);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGALRM:PropertyInfo:size=%lu\n", sizeof(SIGALRM));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGALRM:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGALRM)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGALRM:PropertyInfo:value=%lX\n", SIGALRM);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGBUS:PropertyInfo:size=%lu\n", sizeof(SIGBUS));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGBUS:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGBUS)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGBUS:PropertyInfo:value=%lX\n", SIGBUS);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCHLD:PropertyInfo:size=%lu\n", sizeof(SIGCHLD));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCHLD:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGCHLD)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCHLD:PropertyInfo:value=%lX\n", SIGCHLD);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCONT:PropertyInfo:size=%lu\n", sizeof(SIGCONT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCONT:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGCONT)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCONT:PropertyInfo:value=%lX\n", SIGCONT);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGFPE:PropertyInfo:size=%lu\n", sizeof(SIGFPE));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGFPE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGFPE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGFPE:PropertyInfo:value=%lX\n", SIGFPE);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGHUP:PropertyInfo:size=%lu\n", sizeof(SIGHUP));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGHUP:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGHUP)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGHUP:PropertyInfo:value=%lX\n", SIGHUP);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGILL:PropertyInfo:size=%lu\n", sizeof(SIGILL));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGILL:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGILL)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGILL:PropertyInfo:value=%lX\n", SIGILL);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGINT:PropertyInfo:size=%lu\n", sizeof(SIGINT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGINT:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGINT)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGINT:PropertyInfo:value=%lX\n", SIGINT);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIO:PropertyInfo:size=%lu\n", sizeof(SIGIO));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIO:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGIO)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIO:PropertyInfo:value=%lX\n", SIGIO);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIOT:PropertyInfo:size=%lu\n", sizeof(SIGIOT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIOT:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGIOT)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIOT:PropertyInfo:value=%lX\n", SIGIOT);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGKILL:PropertyInfo:size=%lu\n", sizeof(SIGKILL));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGKILL:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGKILL)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGKILL:PropertyInfo:value=%lX\n", SIGKILL);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPIPE:PropertyInfo:size=%lu\n", sizeof(SIGPIPE));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPIPE:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGPIPE)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPIPE:PropertyInfo:value=%lX\n", SIGPIPE);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPROF:PropertyInfo:size=%lu\n", sizeof(SIGPROF));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPROF:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGPROF)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPROF:PropertyInfo:value=%lX\n", SIGPROF);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGQUIT:PropertyInfo:size=%lu\n", sizeof(SIGQUIT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGQUIT:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGQUIT)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGQUIT:PropertyInfo:value=%lX\n", SIGQUIT);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSEGV:PropertyInfo:size=%lu\n", sizeof(SIGSEGV));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSEGV:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGSEGV)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSEGV:PropertyInfo:value=%lX\n", SIGSEGV);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSTOP:PropertyInfo:size=%lu\n", sizeof(SIGSTOP));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSTOP:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGSTOP)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSTOP:PropertyInfo:value=%lX\n", SIGSTOP);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSYS:PropertyInfo:size=%lu\n", sizeof(SIGSYS));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSYS:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGSYS)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSYS:PropertyInfo:value=%lX\n", SIGSYS);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTERM:PropertyInfo:size=%lu\n", sizeof(SIGTERM));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTERM:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGTERM)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTERM:PropertyInfo:value=%lX\n", SIGTERM);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTRAP:PropertyInfo:size=%lu\n", sizeof(SIGTRAP));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTRAP:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGTRAP)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTRAP:PropertyInfo:value=%lX\n", SIGTRAP);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTSTP:PropertyInfo:size=%lu\n", sizeof(SIGTSTP));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTSTP:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGTSTP)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTSTP:PropertyInfo:value=%lX\n", SIGTSTP);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTIN:PropertyInfo:size=%lu\n", sizeof(SIGTTIN));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTIN:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGTTIN)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTIN:PropertyInfo:value=%lX\n", SIGTTIN);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTOU:PropertyInfo:size=%lu\n", sizeof(SIGTTOU));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTOU:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGTTOU)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTOU:PropertyInfo:value=%lX\n", SIGTTOU);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGURG:PropertyInfo:size=%lu\n", sizeof(SIGURG));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGURG:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGURG)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGURG:PropertyInfo:value=%lX\n", SIGURG);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR1:PropertyInfo:size=%lu\n", sizeof(SIGUSR1));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR1:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGUSR1)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR1:PropertyInfo:value=%lX\n", SIGUSR1);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR2:PropertyInfo:size=%lu\n", sizeof(SIGUSR2));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR2:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGUSR2)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR2:PropertyInfo:value=%lX\n", SIGUSR2);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGVTALRM:PropertyInfo:size=%lu\n", sizeof(SIGVTALRM));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGVTALRM:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGVTALRM)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGVTALRM:PropertyInfo:value=%lX\n", SIGVTALRM);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGWINCH:PropertyInfo:size=%lu\n", sizeof(SIGWINCH));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGWINCH:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGWINCH)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGWINCH:PropertyInfo:value=%lX\n", SIGWINCH);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXCPU:PropertyInfo:size=%lu\n", sizeof(SIGXCPU));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXCPU:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGXCPU)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXCPU:PropertyInfo:value=%lX\n", SIGXCPU);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXFSZ:PropertyInfo:size=%lu\n", sizeof(SIGXFSZ));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXFSZ:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGXFSZ)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXFSZ:PropertyInfo:value=%lX\n", SIGXFSZ);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGINFO:PropertyInfo:size=%lu\n", sizeof(SIGINFO));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGINFO:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGINFO)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGINFO:PropertyInfo:value=%lX\n", SIGINFO);
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGEMT:PropertyInfo:size=%lu\n", sizeof(SIGEMT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGEMT:PropertyInfo:signedness=$%s$\n", (IS_CONST_UNSIGNED(SIGEMT)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGEMT:PropertyInfo:value=%lX\n", SIGEMT);
    return 0;
}
