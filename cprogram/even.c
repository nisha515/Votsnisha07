#include<stdio.h>
int main()
{

int number;
printf("enter any number: ");
scanf("%d", &number);


if(number%2==0)
{
    printf("%d is even number s\n",number);
}

else 
{
    printf("%d is  odd number  \n", number);
}


    return 0;
}