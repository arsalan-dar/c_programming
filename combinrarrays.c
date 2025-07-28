#include<stdio.h>
int main(){
int a[]={1,2,3,4,5};
int b[]={6,7,8,9,0};
int sizeA=sizeof(a)/sizeof(a[0]);
int sizeB=sizeof(a)/sizeof(b[0]);
int c[sizeA+sizeB];
for (int i=0;i<sizeA;i++)
c[i]=a[i];
for (int i=0;i<sizeB;i++)
c[i+sizeA]=b[i];
for(int i=0;i<sizeA+sizeB;i++)
printf("%d ",c[i]);

}