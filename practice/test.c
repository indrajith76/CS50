#include <stdio.h>

int main()
{
    int num, remain, sum = 0;
    printf("Enter Num: ");
    scanf("%i", &num);
    while (num != 0)
    {
        remain = num % 10;
        sum = sum + remain;
        num /= 10;
    }
    printf("%i",sum);
}