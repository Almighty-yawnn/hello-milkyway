#include <stdio.h>


int main(void)
{
	printf("char is %lu byte(s)\n", sizeof(char));
	printf("int is %lu byte(s)\n", sizeof(int));
	printf("short is %lu byte(s)\n", sizeof(short));
	printf("long is %lu byte(s)\n", sizeof(long));
	printf("float is %lu byte(s)\n", sizeof(float));
	printf("double is %lu byte(s)\n", sizeof(double));
	printf("long double is %lu byte(s)\n", sizeof(long double));

	return (0);
}	
