// Q Write a program to determine whether a character entred by the user is lower case or not
#include<stdio.h>
int main()
{
// 92-122 >> ASCII Values
char ch;                                        //For lowercase only
printf("enter the character \n");
scanf("%c",&ch);

if(ch<=122 && ch>=92){
    printf("It is lowercase");
}
else{
    printf("It is not lowercase");
}
return 0;

}



