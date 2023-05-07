#include<stdio.h>

int main()
{

    int A = 0;

    printf("Enter your Age :");
    scanf("%d",&A);

    switch(A)
    {
            case 1 :
                printf("you are a a kid./n");
                break;

             case 2 :
                printf("you are a a bot./n");
                break;

              case 3:
                 printf("you are a a pro./n");
                break;

                default :
                {
                    printf("nope");
                }

    }



    return 0;
}