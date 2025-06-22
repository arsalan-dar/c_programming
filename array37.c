#include<stdio.h>
int main()
{
int A[]={10,20,30,40,50};
int n=sizeof(A)/sizeof(0);
printf("array elements are:\n");
for(int i=0;i<n;i++)
printf("%d ",A[i]);

}