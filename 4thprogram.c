#include<stdio.h>
int main()
{
int a=5,b=10;
printf("Before swap: \na = %d\nb = %d\n ",a ,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swap:\na = %d\nb = %d \n" ,a, b);
return 0;



}