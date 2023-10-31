#include <stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    /* Output is:
        #
        ##
        ###
        ####
        #####
        ######
        #######
        ########
        #########
        ########## 
    */
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    /* Output is: 
        ##########
        #########
        ########
        #######
        ######
        #####
        ####
        ###
        ##
        #
     */
}
