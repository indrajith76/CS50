#include <stdio.h>
#include <string.h>

int get_int(char *text);
char get_string(char *text);

int main(void)
{
    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "topHat"};
    char s[10];
    printf("Enter String: ");
    scanf("%s", &s);
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0) // strcmp() is from string.h library, it's help us to compare two strings.
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found!");
    return 1;

    /* int numbers[] = {20, 500, 10, 100, 1, 50};
    int n = get_int("Number: ");
    for (int i = 0; i < 6; i++){
        if(numbers[i] == n){
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found \n");
    return 1; */
}

int get_int(char *text)
{
    int number;
    printf(text);
    scanf("%i", number);
    return number;
}