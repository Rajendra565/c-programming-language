#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
     for(int i=2;i<=n;i++){
        if(n%i==0){
            printf("  prime  ");

        }
        else{
            printf("  not prime ");

        }

    
     }
    
    return 0;
}