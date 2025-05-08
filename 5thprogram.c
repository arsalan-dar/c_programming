#include<stdio.h>
int main()
{
int a=5,b=10 ,c=0;
printf("Before swap: \na = %d\nb = %d\n ",a ,b);
c+=a;
a=b;
b=c ;
printf("\nAfter swap:\na = %d\nb = %d \n" ,a, b);
return 0;

}