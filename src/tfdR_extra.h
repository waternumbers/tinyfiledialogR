// Added this header file into tinyfiledialogs.c after the include for tinyfiledialogs.h for R compilation
// Comment out fflush(stdout); in  tinyfiledialogs.c
#include <R_ext/Print.h>
#define printf Rprintf
#ifdef _WIN32
 #include <stddef.h> // added for Rtools4.3
#endif
