#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char ch;
    printf("enter cher i for indian f for french : ");
    scanf("%c",&ch);
    if(ch=='i'){
        printf("namaste \n");
    }
    else{
        printf("bonjour\n");
    }
    return 0;   
}
void namaste(){
    printf("namaste");
    bonjour();
}
void bonjour(){
    printf("bonjonr");
}