#include <stdio.h>

int get_int(char *text);

int main()
{
    int nthNumber = get_int("Enter the nth Number: ");
    int firstNum = 0, secondNum = 1, fibo = 0;
    int sum = 0;
    for (int i = 0; i <= nthNumber; i++)
    {
        if (i == nthNumber)
        {
            printf("%d=", firstNum);
        }
        else
        {
            printf("%d+", firstNum);
        }
        fibo = firstNum + secondNum;
        sum = sum + fibo;
        firstNum = secondNum;
        secondNum = fibo;
    }
    printf("%d", fibo);
    return 0;
}

int get_int(char *text)
{
    int num;
    printf(text);
    scanf("%d", &num);
    return num;
}