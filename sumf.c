// #include<stdio.h>
// int sum(int a,int b);
// int main(){
//     int a,b;
//     a=9;
//     b=8;
//     printf("%d",sum(a,b));
    
//     return 0;
// }
// int sum(int a,int b){
//     return a+b;
//     }


#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            printf("%d",j);
        }
        printf("\n");

    }


    return 0;
}


