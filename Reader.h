
#include <stdio.h>
#include "reader.h"
#include "tasks.h"
#include <string>

#ifdef WIN32
	#ifdef reader_STATIC
		#define reader_API
	#else
		#ifdef reader_EXPORTS
			#define READER_API __declspec(dllexport)
		#else
			#define READER_API __declspec(dllimport)
		#endif
	#endif
#else
	#define READER_API
#endif

