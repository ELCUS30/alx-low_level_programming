#include <unistd.h>



/**
 *  main - Function begins
 *  Description: print script, followed by new line to standard error
 *  Return: Function ends
 */

int main(void)

{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);

}
