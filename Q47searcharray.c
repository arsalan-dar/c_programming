#include  <stdio.h>
int main()
{
int ary[100],n,i,key,found;
printf("enter number of elemrnts:");
scanf("%d",&n);
printf("enter %d elementnts",n);
for(i=0;i<n;i++)
 scanf("%d",&ary[i]);
printf("enter the element to search for");
scanf("%d",&key);
for(i=0;i<n;i++){
    if(ary[i]==key){
        printf("element is found at index %d\n",i);
        found=1;
        break;
        }}
    if(!found)
       printf("elemrnt not found");
    

    
}







