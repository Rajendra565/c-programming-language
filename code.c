//with argumant & with value

 /*#include<stdio.h>
 int sum(int a,int b);
 int main(){
    int a,b,c;
    a=2;
    b=9;
    c=sum(a,b);
    printf(" the sum is %d",c);

    return 0;
 }
 int sum(int a,int b){
    return a+b;
 }*/



//with argumant & without value

// #include<stdio.h>
// void printstar(int n);
// int main(){
//     int n;
//     printstar(5);
//     return 0;
// }
// void printstar(int n){
//     for(int i=0;i<=n;i++){
//         printf("%c\n",'*');
//     }
   
// }

//without argumant & with value
#include<stdio.h>
int takenumber();
int main(){
    int n;

    n=takenumber();
    printf("the  number is %d ",n);
    return 0;
}
int takenumber(){
    int i;
    printf("enter number");
    scanf("%d",&i);
    return i;
}