/* #include<stdio.h>
void main()
{
    char str[]="Moinuddin";

}*/

/*Create a string usinf " " and print its content using loop*/

// #include<stdio.h>
// void main()
// {
//     char str[]="Moinuddin";
//     char *ptr=str;
//     while(*ptr!='\0')
//     {
//         printf("%c",*ptr);
//         ptr++;
//     }

// }

// #include <stdio.h>
// void main()
// {
// char*ptr="Moinuddin Qureshi";
// printf("%s\n",ptr);

//  char s[40];
//  printf("Enter your name: ");
//  scanf("%s", s);
//  printf("Your name is %s", s);
// }

// #include <stdio.h>
// void main()
// {

//     char s[40];
//     printf("Enter your name: ");
//     gets(s);
//     // puts(s);    // Here we used Gets Basically Gets >> It is used to receive a multi-word string
//     printf("Your name is %s",s);

// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *ptr = "Moinuddin Qureshi";
//     int a = strlen(ptr);
//     printf("The length of the string is %d", a);
//     return 0;
// }

//  #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char*st1="Hello";
//     char st2[30];
//     strcpy(st2,st1);
//     printf("Now st2 is %s",st2);
//     return 0;
// }

// Strcact
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char*h1="Hello";
//     char h2[30]="World";
//     strcat(h2,h1);
//     printf("Now st2 is %s",h2);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
  char *h1 = "worlz";
  char h2[30] = "world";
  int a = strcmp(h2, h1);
  printf("The value of int is %d", a);
  return 0;
}
