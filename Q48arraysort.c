#include  <stdio.h>
int main()
{
int ary[100],n,i,j,temp;
printf("enter number of elemrnts:");
scanf("%d",&n);
printf("enter %d elementnts",n);
for(i=0;i<n;i++)
  scanf("%d",&ary[i]);

//Bubble sort
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1-i;j++)
    {
        if(ary[j]>ary[j+1])
        {
            temp=ary[j];
            ary[j]=ary[j+1];
            ary[j+1]=temp;
        }
    }
}
printf("Sorted array:\n");
for(i=0;i<n;i++)
printf("%d",ary[i]);
printf("\n");


}

