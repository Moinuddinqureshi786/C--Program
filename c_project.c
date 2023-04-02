#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%200+1;  //Generate a random number between from 1 to 200 
    do
    {
        printf("Guess the number between 1 to 200\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("plz enter lower number\n");
        }
        else if (guess<number)
        {
            printf("plz enter higher number\n");
        }
        else{
            printf("you gussed it in %d attempts\n",nguesses);
        }
        nguesses++;
        
        
    } while (guess!=number);
    return 0;
}