
// What is pointer ?
// Pointer is a variable which stores the address of another variable.
// Some basic example of pointer
// #include<stdio.h>
// int main()
// {
//     int i=100;
//     int *j = &i;
//     printf("The address of i is %u",*(&j));
//     return 0;
// }

// #include<stdio.h>
// int sum(int a ,int b);
// int main()
// {
//   int a=4,b=4;
//   printf("The value of 4+4 is %d",sum(a,b));
//   return 0;
// }
// int sum(int a , int b)
// {
//   return a+b;
// }

/* Types of function

1. Call by value >> Sending the value of arguments
2. Call by reference >> sending the address of arguments
*/

/* #include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int a = 3, b = 4;
    printf("The value a and b before swap is %d and %d\n", a, b);
    // It will not work due to call by value.

    swap(&a, &b);
    printf("The value a and b after swap is %d and %d\n", a, b);
    // It will work due to call by reference.
    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}*/

// Some practice example of pointer.....

// Write a program to print the address of a variable.use this address to get the value of this variable.
/* #include<stdio.h>
int main()
{
    int a=6;
    int *ptr;
    ptr=&a;
    printf("The address of variable a is %d\n",&a);
    printf("The value of variable a is %d",a);
    return 0;
}*/

// Write a program having a variable i. print the address of i,pass this variable to a function and print its address

// #include<stdio.h>

// void add(int a);

// int main()
// {
//     int i =4;
//     printf("The value of variable i is %d\n",i);
//     add(i);
//     printf("The address of variable i is %u\n",&i);
//     return 0;
// }
// void add(int a)
// {
//     printf("The address of variable a is %u\n",&a);
// }

// Write a program using a function which calculates the sum and average of two numbers. Use pointer and print the value of sum and average in main()

// #include<stdio.h>
// void SumandAvg(int a, int b, int *sum, float *avg);

// int main()
// {
//     int i,j,sum;
//     float avg;
//     i=5;
//     j=5;
//     SumandAvg(i,j,&sum,&avg);
//     printf("The value of sum is %d\n",sum);
//     printf("The value of avg is %f",avg);
//     return 0;
// }

// void SumandAvg(int a, int b, int *sum, float *avg)
// {
//     *sum=a+b;
//     *avg= *sum/2;
// }

// Pointer to Pointer 

#include<stdio.h>
int main()
{
    int a=35;
    int *ptr;
    int **ptr_ptr;

    ptr=&a;
    ptr_ptr=&ptr;
    printf("The value if a is %d",**ptr_ptr);
    return 0;
}
