#include <stdio.h>

int main(){
    int n, digit, sum=0, product=1;
    printf("Enter number : ");
    scanf("%d", &n);
    while(n>0){
         digit = n%10;
         sum = sum + digit;
         product = product*digit;
         n = n/10;
         }
         printf("Sum : %d\n", sum);
         printf("Product : %d\n", product);
         return 0;
         }
    
     