#include<stdio.h>
  int main(){
    int n,i,j,k,l;
    char c=64;
    printf("enter number of rows");
    scanf("%d",&n);
    for(i=1 ;i<=n; i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("%c",c+k);
        for(l=k-2;l>0;l--)
        printf("%c",c+l);
        printf("\n");
    }
    printf("\n"); 
}