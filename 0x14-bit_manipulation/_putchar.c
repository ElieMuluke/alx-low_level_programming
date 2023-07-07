#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the value of c to stdout
 * c is the character to print
 *
 * Return: in case of success 1.
 * In case error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
