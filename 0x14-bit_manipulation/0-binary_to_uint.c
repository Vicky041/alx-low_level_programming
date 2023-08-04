#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: containing the string of the binary number
 *
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *b)
{
int n;
unsigned int dec_val = 0;
if (!b)
return (0);
for (n = 0; b[n]; n++)
{
if (b[n] < '0' || b[n] > '1')
return (0);
dec_val = 2 * dec_val + (b[n] - '0');
}
return (dec_val);
}
