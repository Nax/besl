#include <besl/besl.h>

int main(int argc, char** argv)
{
    BESL_Context* ctx;

    ctx = beslCreateContext();
    beslDestroyContext(ctx);

    return 0;
}
