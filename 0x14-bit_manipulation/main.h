#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
/**
 * _putchar - writes the character c to stdout
 * void print_alphabet(void) - prints the alphabet in lowercase
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);

#endif /* _MAIN_H_ */

