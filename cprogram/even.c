#include<stdio.h>
int main()
{

int number;
printf("enter any number: ");
scanf("%d", &number);


if(number%2==0)
{
    printf("%d even number is \n",number);
}

else 
{
    printf("%d odd number is \n", number);
}


    return 0;
}