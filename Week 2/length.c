#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    printf("%s", "What is your name? ");
    scanf("%s", name);
    int n = strlen(name); // get string length
    printf("%i\n", n);
}

/* char get_string(char *prompt){
    char str[20];
    printf("%s", prompt);
    scanf("%s", &str);
    return str;
} */