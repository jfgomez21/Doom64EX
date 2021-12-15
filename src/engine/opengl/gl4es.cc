#include "gl4es.h"

#include <cstddef>

#ifdef ENABLE_GL4ES
#include <GL/glx.h>
#endif

void* gl4esGetProcAddress(const char *name){
#ifdef ENABLE_GL4ES
	return (void *) glXGetProcAddress((const GLubyte *) name);
#else
	return NULL;
#endif
}
