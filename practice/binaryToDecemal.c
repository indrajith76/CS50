/* -------------------------------------------
    🎯Binary To Decimal Converter Program🎯
      📝Programmed by Indrajith Goswami📝
 -------------------------------------------*/

#include <stdio.h>
#include <math.h>

int get_int(char *text);

int main()
{
    int binaryNum, sum = 0, remain, count = 0;
    binaryNum = get_int("Enter a Binary Number: ");
    while (binaryNum != 0)
    {
        remain = binaryNum % 10;
        binaryNum = binaryNum / 10;
        sum = sum + remain * pow(2, count);
        count++; 
    }
    printf("OutPut In Decimal: %d", sum);
}

int get_int(char *text)
{
    int num;
    printf(text);
    scanf("%i", &num);
    return num;
}
