#include <stdio.h>
int main()
{
    char ch;                                  //For uppercase the ASCII Values from 65-90
    printf("Enter the character \n");
    scanf("%c", &ch);

    if(ch<=90 && ch>=65){
        printf("It is uppercase");
    }
    else{
        printf("It is not uppercase");
    }
    return 0;
}