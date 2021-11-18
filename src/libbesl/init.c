#include <stdlib.h>
#include <libbesl/libbesl.h>

BESL_API BESL_Context* beslCreateContext(void)
{
    BESL_Context* ctx;

    ctx = calloc(1, sizeof(*ctx));
    if (!ctx)
        return NULL;
    return ctx;
}

BESL_API void beslDestroyContext(BESL_Context* ctx)
{
    if (ctx)
    {
        free(ctx);
    }
}
