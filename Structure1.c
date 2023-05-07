#include<stdio.h>

struct Student
{
    int Roll_no;
    float Marks;
    char Div;
    int Salary;
};


int main()
{

    struct Student Akash;
    struct Student Vikas;

    Akash.Roll_no = 10;
    Akash.Marks = 81.53;
    Akash.Div = 'A';
    Akash.Salary = 500000;

    Vikas.Roll_no = 01;
    Vikas.Marks = 90.53;
    Vikas.Div = 'A';
    Vikas.Salary = 900000;


    printf("the data of Akash is :\n");

    printf("%d\n",Akash.Roll_no);
    printf("%f\n",Akash.Marks);
    printf("%c\n",Akash.Div);
    printf("%d\n\n",Akash.Salary);

    printf("the data of Vikas is :\n");

    printf("%d\n",Vikas.Roll_no);
    printf("%f\n",Vikas.Marks);
    printf("%c\n",Vikas.Div);
    printf("%d\n",Vikas.Salary);

    return 0;
}