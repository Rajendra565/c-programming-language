#include<stdio.h>
void befor(int a,int b);
void after(int *a,int *b);
int main(){
    int x=9,y=3;

    befor(x,y);
    printf(" this is a befor x=%d&y=%d\n",x,y);

    after(&x,&y);
    printf(" this is a after x=%d&y=%d",x,y);

    

}
void befor(int a,int b){
    int t=a;
    a=b;
    b=t;

}
void after(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;

}
// #include<stdio.h>
// int sum (int *a,int *b);
// int main(){
//     int a=8,b=4;
//     sum (&a,&b);
    


// }
// int sum(int *a,int *b){
//     int  t;
//     t=*a;
//     *a=*b;
//     *b=*a;

// }


