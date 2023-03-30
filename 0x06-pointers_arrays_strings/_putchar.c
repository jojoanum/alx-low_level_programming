#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the characters to c
 *
 * Return: on sucess 1
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
