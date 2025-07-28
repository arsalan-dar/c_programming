#include<stdio.h>
int main()
{
int arr[]={10,20,30,40,50};
int *ptr=arr;
printf("array elemrnts are:\n");
for(int i=0;i<5;i++)
printf("%d\n",*(ptr+i));

return 0;


}