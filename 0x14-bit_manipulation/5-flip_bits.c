#include "main.h"

/**
 * flip_bits - count the number of bits to change.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bitPos, bitFlipCount = 0;
	unsigned long int bitXOR = n ^ m;

	for (bitPos = 63; bitPos >= 0; bitPos--)
	{
	if ((bitXOR >> bitPos) & 1)
		bitFlipCount++;
	}
	return (bitFlipCount);
}
