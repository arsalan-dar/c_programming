#include<stdio.h>
#define size1 3
#define size2 3
int main(){
    int a[size1][size2];
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++)
        printf("%d ",a[i][j]);
    printf("\n");



}
}
