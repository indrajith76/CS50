/*----------------------------------------------
   🎁Programs for Encrypt and Decrypt message🎁
        Programed by Indrajith Goswami 
-----------------------------------------------*/

#include <string.h>
#include <stdio.h>

int main(void)
{
    char message[20], action, encrypted[20];
    int key;

    do
    {
        printf("Want to encrypt or decrypt?\nSelect E for encrypt or D for decrypt(E/D): ");
        scanf("%s", &action);

    } while (action != 'D' && action != 'E');

    printf("Enter Message: ");
    scanf("%s", &message);

    printf("Enter a key(Integer Number): ");
    scanf("%i", &key);

    switch (action)
    {
    case 'E':
        for (int i = 0; i < strlen(message); i++)
        {
            encrypted[i] = (int)message[i] + key;
            printf("%c", encrypted[i]);
        }
        break;
    case 'D':
        for (int i = 0; i < strlen(message); i++)
        {
            encrypted[i] = (int)message[i] - key;
            printf("%c", encrypted[i]);
        }
        break;
    default:
        printf("%s", "Something went wrong!");
        break;
    }
}