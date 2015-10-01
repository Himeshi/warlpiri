/*Header file for performing Warlpiri arithmetic*/
#include <stdio.h>
#include <printf.h>

typedef short warlpiri_u;

/*prototypes*/
int initialize_warlpiri();
static int warlpiri_printf_handler(FILE* stream, const struct printf_info* info, const void* const* args);
static int warlpiri_printf_arginfo(const struct printf_info* info, size_t n, int* argtypes, int* size);
char* u2x(warlpiri_u u);

/*constants*/

/*functions*/
int initialize_warlpiri()
{
    register_printf_specifier('U', warlpiri_printf_handler, warlpiri_printf_arginfo);
}

static int warlpiri_printf_handler(FILE* stream, const struct printf_info* info, const void* const* args)
{
    warlpiri_u *warlpiri_arg;
    char *x;

    warlpiri_arg = *((warlpiri_u**)(args[0]));

    x = u2x(warlpiri_arg); // replace with Ela's u2x function

    return fprintf(stream, "%s", x);
}

static int warlpiri_printf_arginfo(const struct printf_info* info, size_t n, int* argtypes, int* size)
{
    if (n > 0)
        argtypes[0] = PA_POINTER;

    return 1;
}

char *u2x(warlpiri_u u)
{
    static char str[11];

    sprintf(str, "%d", u);

    return str;
}
