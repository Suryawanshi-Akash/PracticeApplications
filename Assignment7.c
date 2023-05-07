#include<stdio.h>


int main()
{

    float no = 3.14;

    float*p = &no;
    float *q = p;

    float ans= 0;

    ans = *p+*q;

    

  
  printf("the value of p is %f\n", p);
 printf("the value of p is %f\n", q);
 printf("the value of p is %f\n", ans);
 printf("the value of p is %f\n \a", ans);




    return 0;
}