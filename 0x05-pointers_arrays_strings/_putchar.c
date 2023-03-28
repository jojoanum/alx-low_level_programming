#include <unistd.h>

/**
 * _putchar - helps me write charaters to c
 * characters are to be printed
 * Return: On Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}	
