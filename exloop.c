//factorial of n
// #include<stdio.h>
/*int factorial(int n);

int main(){
    printf("factorial %d",factorial(5));
    return 0;

}
int factorial(int n){
    if (n==0)
    {
        return 1;/* code */
    /*}
    
    int factorialnm1=factorial(n-1);
    int factorialn=factorial(n-1)*n;
    return factorial;
}*/


//percentage of student
#include<stdio.h>
int calpercentage(int sincene,int math,int sanskrit);
int main(){
    int  sincene=67;
    int math=79;
    int sanskrit=87;
    printf("percentage is : %d",calpercentage(int sincene,int math,int sanskrit));

    return 0;
}
int calpercentage(int sincene,int math,int sanskrit){
return((sincene+math+sanskrit)/300)*100;
}