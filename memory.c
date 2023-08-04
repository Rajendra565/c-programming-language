#include<stdio.h>
#include<stdlib.h>
int main(){
   FILE *fptr
   ptr=fopen("new test.txt","w");
   if (ptr==null){
    printf("file doesn't exist\n");
   }
   else{
    fclose(*fptr);
   }
    return 0;
}