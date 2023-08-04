#include<stdio.h>
void swap(int x,int y);
void _swap(int *x,int *y);
int main(){
    int a=2,b=3;                     
    swap(a ,b);
    printf("a= %d & b= %d",a,b);
    void _swap( &a, &b);
    printf("*a= %d & b*= %d",a,b);

    return 0;

}
void swap(int x,int y){
    int t=x;
    x=y;
    y=x;

}
void _swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=*x;
}
