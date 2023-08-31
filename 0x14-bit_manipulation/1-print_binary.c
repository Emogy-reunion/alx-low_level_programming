#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print in binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
        int shift = sizeof(n) * 8 - 1;
        int leading_zeros = 1;

        while (shift >= 0)
        {
                if ((n >> shift) & 1)
                {
                        leading_zeros = 0;
                        _putchar('1');
                }
                else if (!leading_zeros)
                {
                        _putchar('0');
                }

                shift--;
        }

        if (leading_zeros)
                _putchar('0');

        _putchar('\n');
}

