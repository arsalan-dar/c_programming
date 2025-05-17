#include <stdio.h>
int main()
{
int x,z,k;
int y=2;
printf("enter a number");
scanf("%d",&x);
while(y<=(x/2))

{if(x%y!=0)
z=1;
else
k=0;
y++;
}
if(z&&k)
printf("%d is prime a number\n",x);
else
printf("%d is not a prime number\n",x);
}


