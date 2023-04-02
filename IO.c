#include <stdio.h>
struct studentdata
{
    char *stu_name;
    int stu_id;
    int stu_age;
    int stu_phone_number;

};
int main()
{
    struct studentdata student;
    {
        student.stu_name="Moinuddin";
        student.stu_id=61;
        student.stu_age=20;

        printf("Student name is %s", student.stu_name);
        printf("\nstudent id is %d", student.stu_id);
        printf("\nstudent age is %d", student.stu_age);
       
        return 0;
    };
    
}
