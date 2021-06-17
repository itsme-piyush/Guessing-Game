// Once upon a time in a after fest party in IIT kgp, a person was found dead.
// Police arrived and started the investigation, and with police came the most famous 
// detective Mr. Byomkesh Bakshi. After investigation 10 people were found
// suspicious and each one was given a number from 1 to 10.
// You have to guess the murderer's number in minimum attempts.
// Best of luck. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, g, ng = 1;
    srand(time(0));
    n = rand() % 10 + 1;
    do
    {
        printf("Guess the murderer\n");
        scanf("%d", &g);
        if (g > n)
        {
            printf("Hint: Try Lower number;) and try again\n");
        }
        else if (g < n)
        {
            printf("Hint: Try Higher number;) and try again\n");
        }
        else
        {
            printf("Yayy, you guessed the murderer in %d attempts, you are a very heavy driver\n", ng);
        }
        ng++;
    } while (g != n);
    return 0;
}