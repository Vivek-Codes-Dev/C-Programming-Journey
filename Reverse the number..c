#include <stdio.h>

int main(){
    int n, digit, original, reversed = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    original = n;
    
     while(n>0){
     digit = n % 10;
     reversed = reversed * 10 + digit;
     n = n/10;
     }
     if(reversed == original)
       printf("%d : It is palindrome.", reversed);
     else
       printf("%d : It is not palindrome.", reversed);
     return 0;
     }
    
    