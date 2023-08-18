#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdarg.h>
/**
 * struct typo - structure to hodl a symbol and
 * @s: pointer to the symbol c|i|f|s
 * @print: pointer to the function to call corresponding with each symbol
 */
struct typo
{
        char *s;
        void(*print_it)(va_list);
};
/**
 * printify_t - Typedef for struct typo
 */
typedef struct typo printify_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
