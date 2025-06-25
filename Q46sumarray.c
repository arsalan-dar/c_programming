#include  <stdio.h>
int main()
{
int ary[100],n,i,sum=0;
printf("enter number of elemrnts:");
scanf("%d",&n);
printf("enter %d elementnts",n);
for(i=0;i<n;i++)
{
    scanf("%d",&ary[i]);
    sum+=ary[i];
}
printf("sum of elements of array =%d",sum);






}
