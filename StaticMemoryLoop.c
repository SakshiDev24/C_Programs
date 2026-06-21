#include<stdio.h>

int main()
{
    // static memory allocation
    float marks[5];  //20 bytes

    int i = 0;  //loop counter

    printf("enter your marks : \n");

    //iteration
    //    1      2     3
    for(i = 0; i < 5; i++)
    {
        scanf("%f",&marks[i]);   //4
    }

    printf("entered marks are : \n");
     //    1      2     3
    for(i = 0; i < 5; i++)
    {
        printf("%f\n",marks[i]);   //4
    }
    return 0;
}