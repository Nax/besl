#ifndef BESL_H
#define BESL_H

#if defined(__cplusplus)
# define BESL_EXTERN extern "C"
#else
# define BESL_EXTERN
#endif

#if defined(BESL_STATIC)
# define BESL_ABI
#else
# if defined(_WIN32)
#  if defined(BESL_BUILD)
#   define BESL_ABI __declspec(dllexport)
#  else
#   define BESL_ABI __declspec(dllimport)
#  endif
# elif defined(__GNUC__) && defined(BESL_BUILD)
#  define BESL_ABI __attribute__ ((visibility("default")))
# else
#  define BESL_ABI
# endif
#endif

#define BESL_API BESL_EXTERN BESL_ABI

typedef struct BESL_Context BESL_Context;

/* Context */
BESL_API BESL_Context*  beslCreateContext(void);
BESL_API void           beslDestroyContext(BESL_Context* ctx);

#endif /* BESL_H */
