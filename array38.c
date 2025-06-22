#include<stdio.h>
int main()
{
  int A[100],n;
  printf("enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers\n",n);
  for(int i=0;i<n;i++)
  scanf("%d",&A[i]);
  printf("Elements of array are\n");
  for(int i=0;i<n;i++)
  printf("%d ",A[i]);



}
