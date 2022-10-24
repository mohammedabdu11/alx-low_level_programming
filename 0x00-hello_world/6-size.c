<<<<<<< HEAD
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char is=%i byte(s)\n", sizeof(char));
	printf("Size of an int is=%i byte(s)\n", sizeof(int));
	printf("Size of a long int is=%i byte(s)\n", sizeof(long int));
	printf("Size of a lon long int is=%i byte(s)\n", sizeof(long long int));
	printf("Size of a float is=%i byte(s)\n", sizeof(float));
	return (0);
}	
=======

#include <stdio.h>
/**
 * main - Print the size of data type
 * Return: Always 0 (success)
 */
 int main(void)
 {
 	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(d));
	printf("Size of a float: %lu: byte(s)\n",(unsigned long)sizeof(e));
	return (0);
}





	
	
	
>>>>>>> 3ddc2872976c12731d7a057adb26dd3497ad767a
