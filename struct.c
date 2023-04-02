/* #include <stdio.h>
#include <string.h>

struct employee
{

    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee m;
    m.code = 200;
    m.salary = 50.0687;
    strcpy(m.name, "Moinuddin Qureshi");
    printf("%d\n", m.code);
    printf("%.2f\n", m.salary);
    printf("%s\n", m.name);
    return 0;
}*/

/* #include <stdio.h>
#include <string.h>

struct employee
{

    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1, e2, e3;
    {
        printf("Enter the value for code e1: ");
        scanf("%d", &e1.code);
        printf("Enter the value for salary e1: ");
        scanf("%f", &e1.salary);
        printf("Enter the name for e1: ");
        scanf("%s", e1.name);

        printf("Enter the value for code e2: ");
        scanf("%d", &e2.code);
        printf("Enter the value for salary e2: ");
        scanf("%f", &e2.salary);
        printf("Enter the name for e2: ");
        scanf("%s", e2.name);

        printf("Enter the value for code e3: ");
        scanf("%d", &e3.code);
        printf("Enter the value for salary e3: ");
        scanf("%f", &e3.salary);
        printf("Enter the name for e3: ");
        scanf("%s", e3.name);

        return 0;
    };
}*/

/* #include <stdio.h>
#include <string.h>

struct moinuddin
{

    int code;
    float salary;
    char name[20];
};

int main()
{
    struct moinuddin m1 = {200, 88.90, "moinuddin"};

    printf("code is :%d\n",m1.code);
    printf("salary is :%f\n",m1.salary);
    printf("nName id :%s",m1.name);
    return 0;
}*/

/* #include <stdio.h>
#include <string.h>

struct moinuddin
{

    int code;
    float salary;
    char name[20];
};

int main()
{
    struct moinuddin e1;
    struct moinuddin *ptr;
    ptr=&e1;
   //  (*ptr).code=101; When can also write this syntax
   ptr->code=200;
    printf("%d",e1.code);
    return 0;


}*/

/* #include <stdio.h>
#include <string.h>
struct moinuddin
{

    int code;
    float salary;
    char name[20];
};

void fun(struct moinuddin em);
int main()
{
    struct moinuddin e1;
    struct moinuddin *ptr;
    ptr = &e1;
    //  (*ptr).code=101; When can also write this syntax
    ptr->code = 200;
    ptr->salary = 800.00;
    strcpy(ptr->name, "Moinuddin");
    fun(e1);

    return 0;
}

void fun(struct moinuddin em)
{
    printf("The code of moinuddin is %d\n", em.code);
    printf("The salary is %f\n", em.salary);
    printf("The salary is %s\n", em.name);
}*/

// Create a 2 dimensional vector using structure in c
/* #include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    {
        v1.x = 100;
        v1.y = 200;
    };

    printf("X is dim %d  and y dim is %d\n", v1.x, v1.y);
    {
        v2.x = 1009;
        v2.y = 2009;
    };

     printf("X is dim %d  and y dim is %d\n", v2.x, v2.y);

     return 0;
}*/

/* Create an array of 5 complex number and display with the help of display function.
   The value must taken as an input from the user */

/* #include <stdio.h>
#include <string.h>

typedef struct complex
{
   int real;
   int complex;

}comp;

void display(comp c);

int main()
{
    comp num[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the real value for %d num\n",i+1);
        scanf("%d",&num[i].real);

        printf("Enter the complex value for %d num\n",i+1);
        scanf("%d",&num[i].complex);
    }

     for(int i=0;i<5;i++)
    {
        display(num[i]);
    }
    return 0;
}
void display(comp c)
{
    printf("The real part is %d\n",c.real);
    printf("The complex part is %d\n",c.complex);
}*/

// Write a structure capable of storing date write a function to compare those dates

/* #include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
void display(date d);
int datecmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }

    if (d1.year < d2.year)
    {
        return -1;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }

    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.date > d2.date)
    {
        return 1;
    }

    if (d1.date < d2.date)
    {
        return -1;
    }
}
int main()
{
    date d1 = {17, 03, 2025};
    date d2 = {7, 02, 2024};

    display(d1);
    display(d2);

    int a=datecmp(d1,d2);
    printf("Date comparison return: %d\n",a );

    return 0;
}

void display(date d)
{
    printf("The date is %d/%d/%d\n", d.date, d.month, d.year);
}*/