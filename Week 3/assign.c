#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%i", &number);
    for (int i = 1; i <= number; i++)
    {
        for (int j = number; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= 2 * (i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 2 * (number - i); k > 1; k--)
        {
            printf("*");
        }

        printf("\n");
    }

    /* Output:
     *
     ***
     *****
     *******
     *********
     *******
     *****
     ***
     *
     */

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    for (int i = 10; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}