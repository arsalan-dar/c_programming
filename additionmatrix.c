#include<stdio.h>
int main(){
printf("enter the no of rows and columns");
int n,m,i,j;
scanf("%d %d",&n,&m);
int A[n][m];
printf("enter the elements of first matrux");
for(i=0;i<n;i++){
    for(j=0;j<m;j++)
    scanf("%d",&A[i][j]);
}
printf("enter the elements of second matrix"); 
int B[i][j];
for (i=0;i<n;i++){
    for(j=0;j<m;j++)
    scanf("%d",&B[i][j]);
}
int C[n][m];
for (i=0;i<n;i++)
for(j=0;j<n;j++)
 C[i][j]=A[i][j]+B[i][j];
for (i=0;i<n;i++){
  for(j=0;j<n;j++)
    printf("%d  ",C[i][j]);
printf("\n");}







}