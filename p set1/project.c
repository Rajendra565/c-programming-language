
#include<stdio.h>
int average(int a,int b,int c);

int main(){
    int a,b,c;
    printf("Enter the number a ");
    scanf("%d",&a);
    printf("Enter the number b ");
    scanf("%d",&b);
    printf("Enter the number c ");
    scanf("%d",&c);
    printf("final average number %d",average(a,b,c));

}
int average(int a,int b,int c){
    int total; 
    total=(a+b+c)/3;
    return total;
}





