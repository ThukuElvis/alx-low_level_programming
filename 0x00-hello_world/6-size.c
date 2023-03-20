#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return : 0 (Success)
 */
int main(void)
{

char;
int;
long int;
long long int;
float;
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of an int: %lu byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(long int));
printf("Size of long long int: %lu byte(s)", sizeof(long long int));
printf("Size of float: %lu byte(s)", sizeof(float));
return (0);
}