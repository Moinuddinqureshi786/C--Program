
// Q. Write a C program to find out whether a student is pass or fail, if it require total 40% and at least 33% in each subject to pass.
// Assume 3 subjects and take marks as an input from the user
// #include <stdio.h>
// int main()
// {
//     int maths, physics, chemistry;
//     float total;

//     printf("Enter your maths marks \n");
//     scanf("%d", &maths);

//     printf("Enter your physics marks \n");
//     scanf("%d", &physics);

//     printf("Enter your chemistry marks \n");
//     scanf("%d", &chemistry);

//     total=(maths+physics+chemistry)/3;

//     if((total<40) || maths<33 || physics<33 || chemistry<33){
//         printf("Your total percentage if %f and you are fail",total);
//     }
//     else{
//         printf("Your total percentage if %f and you are pass",total);
//     }
//     return 0;
// }

// Q2. Write a C program to find grade of a student given his marks based on below
// #include<stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter a marks \n");
//     scanf("%d",&marks);

//     if(marks>=90 && marks<=100){
//         printf("A Grade \n");
//     }
//      else if(marks>=80 && marks<=90){
//         printf("B Grade \n");
//     }
//      else if(marks>=70 && marks<=80){
//         printf("C Grade \n");
//     }
//      else if(marks>=60 && marks<=70){
//         printf("D Grade \n");
//     }
//     else if(marks>=50 && marks<=40){
//         printf("D Grade \n");
//     }
//     else{
//         printf("Fail \n");
//     }
//     return 0;
// }

// Q3. Calculate income tax paid by the employee to the government as per the satus mentioned below

/* Income                 Tax
   2.5L -3.0L              5%
   5.0L - 10.0L            20%
   Above 10.0L             30%  */

// #include <stdio.h>
// int main()
// {
//     float tax = 0, income;
//     printf("Enter your income \n");
//     scanf("%f", &income);

//     if(income>=250000 && income<=500000){
//         tax =tax+0.05*(income-250000);
//     }

//      if(income>=500000 && income<=1000000){
//         tax =tax+0.20*(income-500000);
//     }

//      if(income>=1000000){
//         tax =tax+0.30*(income-1000000);
//     }
//     printf("Your net income tax is %f",tax);
//     return 0;
// }

