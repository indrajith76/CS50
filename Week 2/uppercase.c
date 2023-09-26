#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    /*
    // lowercase to Uppercase [without ctype library]
    char s[20];
    printf("Before: ");
    scanf("%s", s);

    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    */

    char name[21] = "IndRaJitH";
    // printf("Before: ");
    // scanf("%s", name);
    printf("After: ");
    for (int i = 0, n = strlen(name); i <n; i++)
    {
        printf("%c", toupper(name[i]));
    } 
    printf("\n");
}