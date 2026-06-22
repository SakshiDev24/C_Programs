#include<stdio.h>

//call by address
int strlenX(char *ptr)
{
    int i = 0;

    while(*ptr != '\0')
    {
        i++;
        ptr++;

    }

    return i;

}

int main()
{
    char str[] = "Ganesh";
    int ret = 0;

    ret = strlenX(str);  //strlenX(100);

    printf("string length is : %d\n",ret);
    

    return 0;
}