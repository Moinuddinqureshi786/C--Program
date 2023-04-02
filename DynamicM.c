
// Write a program to create to dynamic array of 6 int using malloc.
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int *ptr;
//     int n;

//     printf("How many integers do you want to enter ? \n");
//     scanf("%d", &n);

//     ptr=(int*)malloc(n*sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//        printf("Enter the value of %d element: \n",i);
//        scanf("%d",&ptr[i]);
//     }

//       for (int i = 0; i < n; i++)
//     {
//        printf("The value of %d element is %d: \n",i,ptr[i]);

//     }

//     return 0;
// }

// Calloc

// Write a program to create an array of size n using calloc where n is an integer entered by the user.

/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("How many integers do you want to enter ? \n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    return 0;
}*/

// Create an array dynamically capable of storing 5 integers. Now use realloc function so that it can now store 10 integers
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr=(int*)malloc(5*sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the value of %d: \n",i);
//         scanf("%d",&ptr[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value of %d element is %d\n",i,ptr[i]);
//     }

//     ptr=realloc(ptr,10*sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the value of %d: \n",i);
//         scanf("%d",&ptr[i]);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("The value of %d element is %d\n",i,ptr[i]);
//     }

//     return 0;
// }

// Create an array of multipliaction table of 7 upto 10(7x10).use realloc function to make it store 15 numbers.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("The value of 7 x %d = %d\n", i + 1, ptr[i]);
    }

    ptr = realloc(ptr, 15 * sizeof(int));
    printf(".....After Reallocation.....\n\n");
    for (int i = 0; i < 15; i++)
    {
        ptr[i]=7*(i+1);
        printf("The value of 7 x %d = %d\n",i+1,ptr[i]);
    }
    
    return 0;
}