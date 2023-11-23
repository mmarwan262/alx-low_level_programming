#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian = (char *)&num;

	/* If the first byte (lowest address) is 1, it's little endian */
	return (*endian == 1 ? 1 : 0);
}
