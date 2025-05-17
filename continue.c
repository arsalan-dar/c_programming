#include <stdio.h>
int main()
{
int x=1;
while (x<11)
 {
 if(x==5)
  {
   x=x+2;
   continue;
  }
printf("%d\n",x);
x+=2;
 }


}