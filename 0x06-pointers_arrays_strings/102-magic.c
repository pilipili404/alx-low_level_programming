#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;
    /*
     *  Add one line of code here, before the ;
     *  so that the program prints a[2] = 98, followed by a new line.
     *  You can only write one statement.
     *  You are not allowed to use the variable a in your new line of code.
     *  You are not allowed to modify the variable p.
     *  You can only use the standard library.
     */
    *(p + 5) = 98; /* This line adds 98 to a[2] */
    /* Write your line of code here */
    a[5] = 98;
    printf("a[2] = %d\n", a[2]);
    return (0);
}

