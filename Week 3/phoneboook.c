#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
} person;

int main(void)
{
    /* char *names[] = {"Indrajith", "David"};
    char *numbers[] = {"+88-012-3456-789", "+88-017-6543-987"};

    char name[20];
    printf("Enter Name: ");
    scanf("%s", &name);

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found!");
    return 1; */

    person people[2];

    people[0].name = "Indrajith";
    people[0].number = "+88123456789";

    people[1].name = "David";
    people[1].number = "+88015456754";

    char name[20];
    printf("Enter Name: ");
    scanf("%s", &name);

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found!");
    return 1;
}