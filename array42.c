#include<stdio.h>
int main()
{
    char A[100];
    int length=0;
    printf("enter a string");
    fgets(A,sizeof(A),stdin);
    while(A[length]!='\0'){
     if(A[length]=='\n'){
     break;
     }

length++;}
printf("length of the string:%d\n",length);


}