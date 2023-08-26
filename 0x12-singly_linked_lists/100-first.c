#include <stdio.h>
/**
 * func1 - runs before main func
 * Return: nothing
 */
void func1(void)__attribute__((constructor));
void func1(void)
{
		printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
