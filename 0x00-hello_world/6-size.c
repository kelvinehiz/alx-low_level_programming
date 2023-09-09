#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types on both 32-bit and 64-bit machines.
 *
 * Return: Always 0 (Succesful)
*/

int main(void)
{

        /* sizeof evaluates the size of a variable */
        printf("Size of a char: %zu byte(s)\n", sizeof(char));
        printf("Size of an int: %zu byte(s)\n", sizeof(int));
        printf("Size of an double: %zu byte(s)\n", sizeof(double));
#if defined(__LP64__)
        printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
#else
        printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
        // long long int is not available on 32-bit machines
#endif
        printf("Size of a float: %zu byte(s)\n", sizeof(float));

        return (0);

}
