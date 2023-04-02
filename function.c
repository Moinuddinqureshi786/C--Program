// Function- A Function is a set of block of code which perform particular task.

// #include<stdio.h>
// void moinuddin();           // << Function Prototype
// int main()
// {
//   printf("Hello Good morning  guys !!\n");
//   moinuddin();                // Function call
//   return 0;
// }

// void moinuddin()  //Function Defination
// {
//     printf("And I hope everyone  is great now!!\n");
// }

// #include <stdio.h>
// int sum(int a, int b);

// int main()
// {
//     int c;
//     c = sum(10, 10);
//     printf("The value of c is %d", c);
//     return 0;
// }

// int sum(int a, int b)
// {
//     int c;
//     c = a * b;
//     return c;
// }

// Calculate the are of square
// Area of circle is a^2

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int side;
//     printf("Enter the value of side\n");
//     scanf("%d",&side);
//     printf("The value of side is %f",pow(side,2));
//     return 0;
// }

/*  What is recursion ?
   A finction is called itself is called recursion*/

/* #include <stdio.h>
int factorial(int x);
int main()
{
    int a = 7;
    printf("The value of factorial %d is %d ", a, factorial(a));
    return 0;
}
int factorial(int x)
{
    printf("Calling factor is (%d)\n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}*/

// Write a program using function to find average of three numbers

/* #include <stdio.h>

float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("Enter the value of c\n");
    scanf("%d", &c);

    printf("The value of average is %f", average(a, b, c));
}

float average(int a, int b, int c)
{
    float result;
    result = (a + b + c) / 3;
    return result;
}*/

// Write a program using functions to print the following pattern (first n lines)
// #include <stdio.h>
// void printpattern(int n);
// int main()
// {
//     int n = 3;
//     printpattern(n);
//     return 0;
// }

// void printpattern(int n)
// {
//       if(n==1){
//         printf("*\n");
//         return;
//       }
//     printpattern(n - 1);
//     for (int i = 0; i < (2*n-1); i++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }

#include<stdio.h>
void num();
int main()
{
    
     num();
     return 0;
    
}

void num()
{
    int a,b,sum=0;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Your numbers is %d",sum);

}
