#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)", sizeof(a));
	printf("size of an int: %d byte(s)", sizeof(b));
	printf("size of a long int: %d byte(s)", sizeof(c));
	printf("size of a long long int: %d byte(s)", sizeof(d));
	printf("size of a float: %d byte(s)", sizeof(f));
	return (0);
}
