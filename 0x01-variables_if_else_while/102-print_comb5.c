#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        int f = i / 10;
        int s = i % 10;

        for (j = i; j <= 99; j++) {
            int r = j / 10;
            int t = j % 10;

            putchar(f / 10 + '0');
            putchar(f % 10 + '0');
            putchar(s / 10 + '0');
            putchar(s % 10 + '0');
            putchar(' ');
            putchar(r / 10 + '0');
            putchar(r % 10 + '0');
            putchar(t / 10 + '0');
            putchar(t % 10 + '0');

            if (j < 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
