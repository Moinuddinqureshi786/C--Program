/* #include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you,char com)
{
    if(you==com)
    {
        return 0;
    }


    if (you=='s' && com=='g')
    {
       return -1;
    }
    else if(you=='g' && com=='s')
    {
        return 1;
    }

    if (you=='s' && com=='w')
    {
       return 1;
    }
    else if(you=='w' && com=='s')
    {
        return -1;
    }

    if (you=='g' && com=='w')
    {
       return -1;
    }
    else if(you=='w' && com=='g')
    {
        return 1;
    }
    
}

 
int main()
{

   char you,com;
   srand(time(0));
   int number=rand()%100+1; 

   if(number<33)
   {
    com ='s';
   }
   else if (number>33 && number<66)
   {
    com='w';
   }
   else
   {
    com='g';
   }
   

    printf("Enter 's' for snake, 'w' for water 'g' for gun \n");
    scanf("%c",&you);
    int result=snakewatergun(you,com);
    if(result==0)
    {
        printf("Game Draw \n");
    }
    else if (result==1)
    {
        printf("You win :) \n");
    }
    else
    {
        printf("You lose :( \n");
    }

    printf("You chose %c and computer chose %c",you ,com);
    return 0;
}*/
