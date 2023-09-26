#include <stdio.h>

int get_int();

const int N = 5;
float average(int length,int array[]);

int main(void)
{
    /* int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    // printf("Average: %i\n", (score1 + score2 + score3) / 3); // int value
    // printf("Average: %f\n", (score1 + score2 + score3) / 3.0); // float value
    printf("Average: %f\n", (score1 + score2 + score3) / (float) 3); // float value */

    /* ---------------
            Array
     ---------------*/
    /* int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3); 
    
    
    // taking input from Users
    int scores[3];
    scanf("%i", &scores[0]);
    scanf("%i", &scores[1]);
    scanf("%i", &scores[2]);
    printf("Average: %f\n",(scores[0] + scores[1] + scores[2]) / (float) 3); 
    
    
    int scores[3];
    scores[0] = get_int("Score : ");
    scores[1] = get_int("Scores : ");
    scores[2] = get_int("Scores : ");
    printf("Average: %f\n", (scores[0]+scores[1]+scores[2])/(float) 3); */

    /* int scores[3];
    for(int i = 0; i < 3; i++){
        scores[i] = get_int("Score:");
    }
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3); */

    int scores[N];
    for(int i = 0; i < N; i++){
        scores[i] = get_int("Score:");
    }
    printf("Average: %f\n", average(N,scores));
}

float average(int length,int array[]){
    int num = 0;
    for(int i = 0; i < length; i++){
        num = num + array[i];
    }
    return num / (float) length;
}

int get_int(char *prompt)
{
    int number;
    printf("%s", prompt);
    scanf("%i", &number);
    return number;
}