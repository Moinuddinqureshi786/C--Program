// Array >> It is collection of similar element

/* #include <stdio.h>
int main()
{
    int marks[4];
    printf("Enter the value of student 1: ");
    scanf("%d", &marks[0]);

    printf("Enter the value of student 2: ");
    scanf("%d", &marks[1]);

    printf("Enter the value of student 3: ");
    scanf("%d", &marks[2]);

    printf("Enter the value of student 4: ");
    scanf("%d", &marks[3]);

    printf("you have entered %d %d %d and %d",marks[0],marks[1],marks[2],marks[3]);
    return 0;
} */

/* #include <stdio.h>

int main()
{
    int marks[4];

    // Using for loop
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of marks for student %d\n", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("The value of marks for student %d is %d\n", i + 1, marks[i]);
    }
    return 0;
}*/

// Intialize of array

/* #include <stdio.h>

void main()
{
    // int a[] = {100, 200, 300};
    // printf("The value of a is %d\n", a[0]);
    // printf("The value of a is %d\n", a[1]);
    // printf("The value of a is %d\n", a[2]);

    char *moin[3] = {"moinuddin","Arjun","Sonu"};
    printf("String array elements are: \n");
    // printf("The value of a is %s\n", moin[0]);
    // printf("The value of a is %s\n", moin[1]);
    // printf("The value of a is %s\n", moin[2]);

    for(int i=0;i<3;i++)
    {
        printf("%s\n",moin[i]);
    }

}*/

/* #include<stdio.h>
int main()
{
    int  i=100;
    int *ptr=&i;
    printf("The value of ptr is %u\n",ptr);
    ptr=ptr+3;  // Will increase the value of pointer
    printf("The value after adding 3 is %u\n",ptr);
    return 0;
}*/

/* #include<stdio.h>
void ptrarr(int *ptr,int n);
int main()
{
    int arr[]={100,200,300,400,500};
    ptrarr(arr,7);
    printf("%d",arr[2]);
    return 0;

}

void ptrarr(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    printf("The value of element is %d is %d\n",i+1,*(ptr+1));

    ptr[2]=2000;
}*/

/* Create a Array of 10 numbers verify using pointer arihtmetic that (pointer+2) points
   to the 3rd elements where ptr is a pointer pointing to the first element of the array*/

/* #include<stdio.h>
void main()
{
    int arr[10];
    int *pointer=&arr[0];
    pointer=(pointer+2);
    if(pointer==&arr[2])
    {
        printf("This point to the same location in memory\n");
    }
    else
    {
          printf("This point do not to the same location in memory\n");
    }

}*/

#include<stdio.h>

int main(){
    int num;
    // Take the number as an input from the user
    printf("Enter the value of number whose multiplication table is to be printed\n");
    scanf("%d", &num);
    
    printf("The multiplication table of %d is\n", num);
     for (int i = 0; i < 10; i++)
     {
         printf("%d X %d = %d\n",num, i+1, (i+1)*num);
     }
    
    return 0;
}