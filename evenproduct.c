#include <stdio.h>
int main()
{
int x;
int product=1;
for(x=1;x<11;x++)
 {if(x%2==0)
  {
    product*=x;
  }
 }
    printf("%d\n",product);

}
 