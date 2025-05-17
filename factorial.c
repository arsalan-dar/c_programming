#include <stdio.h>
int main()
{
int x;
int y=1;
printf("Enter a number");
scanf("%d",&x);
while(x>0)
{y=y*x;
x--;
}
printf("%d",y);




}