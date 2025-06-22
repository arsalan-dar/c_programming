#include<stdio.h>
int main()
{
      char B[100];
    printf("enter a string");
    fgets(B,sizeof(B),stdin);//reads entire lline including space
    printf("you entered:%s",B);
}