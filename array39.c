#include <stdio.h>
int main()
{
  int A[100],n,i;
  printf("enter the number of elements");
  scanf("%d",&n);
  printf("enter %d integers",n);
  for (i=0;i<n;i++)
scanf("%d",&A[i]);
printf("Array in reveerse order is\n");
for(i=(n-1);i>=0;i--)
printf("%d ",A[i]); 
  

}