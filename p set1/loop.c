// #include<stdio.h>
// int main(){
//      // *******
//     //  *******    
//     //  *******    
//     //  *******    
//     //  *******    
//     //  *******    
//   // int i,j,a;
//   // printf("enter the number to print the star patten");  
//   // scanf("%d",&a);
//   // for( i=1;i<=a;i++){
//   //   for( j=1;j<=a;j++){
//   //       printf("*");
//   //   }
//   //   printf("\n");
//   // }
// }
#include<stdio.h>
int main(){
  int i,j,n;
  printf("enter the number to print star patten");
  scanf("%d",&n);
  for ( i = 1; i <=n; i++)
  {
    for(j=1; j<=n;j++){
      if(i==1||i==n||j==1||j==n){
          printf("*");
      }
      else{
        printf(" ");
      } 
    }
    printf("\n");
  }
  

}