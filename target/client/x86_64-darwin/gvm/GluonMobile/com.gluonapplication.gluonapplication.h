#ifndef __COM_GLUONAPPLICATION_GLUONAPPLICATION_H
#define __COM_GLUONAPPLICATION_GLUONAPPLICATION_H

#include <graal_isolate.h>


#if defined(__cplusplus)
extern "C" {
#endif

int run_main(int paramArgc, char** paramArgv);

void vmLocatorSymbol(graal_isolatethread_t* thread);

#if defined(__cplusplus)
}
#endif
#endif
