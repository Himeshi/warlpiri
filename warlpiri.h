/*Header file for performing Warlpiri arithmetic*/
#include <stdio.h>
#include <printf.h>

/*prototypes*/
void initialize_warlpiri();
static int printf_arginfo_U(const struct printf_info* info, size_t n, int* argtypes);
static int printf_output_U(FILE* stream, const struct printf_info* info, const void* const* args);
int warlpiri_scan(const char* fmt, ...);

/*constants*/

/*functions*/
void initialize_warlpiri()
{
    register_printf_function('U', printf_output_U, printf_arginfo_U);
}

static int printf_arginfo_U(const struct printf_info* info, size_t n, int* argtypes)
{
    if (n > 0)
        argtypes[0] = PA_POINTER;

    return 1;
}

static int printf_output_U(FILE* stream, const struct printf_info* info, const void* const* args)
{
    printf("UNUM");
    return 1;
}

int warlpiri_scan(const char* fmt, ...)
{
    int i;
    int *j = NULL;
    char *c = NULL;
    char* s;

    va_list argp;
    va_start(argp, fmt);

    for (i = 0; fmt[i] != '\0'; i++) {
        if (fmt[i] != '%') {
            fgetc(stdin);
            continue;
        }

        switch (fmt[++i]) {
        case 'c':
            c = va_arg(argp, char *);
            *c = fgetc(stdin);
            break;

        case 's':
            j = va_arg(argp, int *);
            // TODO
            break;

        case 'U':
            printf("UNUM");
            break;

        case '%':
            putchar('%');
            break;
        }
    }

    va_end(argp);
    return 0;
}