#include<stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
}date;
void display(date d)
{
    printf("The date is %d/%d/%d\n",d.date,d.month,d.year);
}

int main()
{
    date d = {2, 3, 23};
    display(d);
    
    return 0;
}

