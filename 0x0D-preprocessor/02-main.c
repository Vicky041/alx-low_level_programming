#include <stdio.h>
/**
* main - a program that prints the name of the file it was compiled from
*
* Return: Always 0 on success
*/
int main(void)
{
printf("FILE : %s\n", __FILE__);
return (0);
}
