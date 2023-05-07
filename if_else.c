#include<stdio.h>

int main()
{
int Age = 0;

printf ("Enter Your Age\n");
scanf ("%d", &Age);

if(Age<18)
{

     printf("You are not allowed to party\n");

}else
{

    printf("You are allowed to party\n ");

}



    return 0;
}