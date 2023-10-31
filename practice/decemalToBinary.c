/* -------------------------------------------
    🎯Decimal To Binary Converter Program🎯
      📝Programmed by Indrajith Goswami📝
 -------------------------------------------*/

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int get_int(char *text);

int main()
{
    int decimalNum, sum = 0, remain, count = 0;
    char descendingNums[20] = "", ascendingNums[20] = "";
    decimalNum = get_int("Enter a Decimal Number: ");
    while (decimalNum != 0)
    {
        char bit[1];
        remain = decimalNum % 2;
        itoa(remain, bit, 10);
        decimalNum = decimalNum / 2;
        strcat(descendingNums, bit);
        count++;
    }

    printf("Output in Binary: ");
    for (int i = strlen(descendingNums) - 1; i >= 0; i--)
    {
        printf("%c", descendingNums[i]);
    }
}

int get_int(char *text)
{
    int num;
    printf(text);
    scanf("%i", &num);
    return num;
}