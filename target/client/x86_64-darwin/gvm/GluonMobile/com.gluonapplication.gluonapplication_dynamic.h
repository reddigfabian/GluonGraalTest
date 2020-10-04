#ifndef __COM_GLUONAPPLICATION_GLUONAPPLICATION_H
#define __COM_GLUONAPPLICATION_GLUONAPPLICATION_H

#include <graal_isolate_dynamic.h>


#if defined(__cplusplus)
extern "C" {
#endif

typedef int (*run_main_fn_t)(int paramArgc, char** paramArgv);

typedef void (*vmLocatorSymbol_fn_t)(graal_isolatethread_t* thread);

#if defined(__cplusplus)
}
#endif
#endif
