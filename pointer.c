// #include<stdio.h>
// void sqaure( int n);
// void _sqaure( int *n);

// int main(){
//     int number=5;
//     sqaure( number);
//      printf("number = %d ",number);


//     _sqaure(&number);


//     return 0;

// }
// void sqaure(int n){
//     n=n * n;
//     printf("sqaure = %d ",n);
// }
// void _sqaure(int *n){
//     *n=(*n) * (*n) ;
//     printf("sqaure = %d \n",*n);
// }
#include<stdio.h>
void swap(int a,int b);
int main (){
    int x=1,y=3;
 
    swap(x,y);
    printf("x=%d & y=%d\n",x,y);
    return 0;
}
void swap(int a,int b){
    int t=a;
    a = b;
    b = t;
    printf("a= %d & b= %d \n",a,b);
}



// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("enter  a");
//     scanf("%d",&a);
//     printf("enter b\n");
//     sacnf("%d",&b);
//     printf("sum of two number %d" ,a+b);

//     return 0;
// }