#include<stdio.h>
#include<stdlib.h>

int main()
{
     int Arr[10];        // static memory allocation
    int size = 0;
    int * ptr = NULL;

    printf("enter the size of Array\n");
    scanf("%d",&size);

    // Step  1: Allocate the memory 
    ptr = (int *)calloc(sizeof(int) , size);
    
    // Step 2 : Use the memory

    // Step 3 : Free the memory

    free(ptr);
    
    return 0;
}