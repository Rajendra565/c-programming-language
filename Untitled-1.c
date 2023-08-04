// #include<stdio.h>
// int main(){
//     int n, i=2,j,flag,c=0;
//     system("clear");
//     printf("enter range of number");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         flag=0;
//         j=2;
//         while(j<=i/2)
//         {
//             if(i%j==0)
//             {
//                 flag =1;
//                 break;

//             }
//             j++;
//         }
//         if(flag==0)
//         {
//             printf("%d\t",i);
//             c++;
//         }
//         i++;
//     }
//     printf("\ntotal primes=%d \n",c);
    
// }

#include<stdio.h>
int main(){
    int i=0;
    do
    {
        if (i==8/* condition */)
        {
           continue; /* code */
        }
        
        printf("%d\n",i);
        i++;
    } while (i<=10);
    
    return 0;
}







