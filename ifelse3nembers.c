#include <stdio.h>
int main()
{
int a,b,c;
printf("enter three nunbers");
scanf("%d %d %d",&a, &b, &c);
if(a>b){
 if(a>c){
printf("%d is the greatest no\n",a );
}
else{
printf("%d is the gresatest numbeer\n",c);
}
}
else{ 
if(b>c){
printf("%d is the grestest number",b);
}
else {
printf("%d is the greatest number",c);
}

}
return 0;

}