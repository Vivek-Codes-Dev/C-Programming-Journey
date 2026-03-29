#include <stdio.h>

int main(){
    int i, n, not_prime=0;
    printf("Enter n : ");
    scanf("%d", &n);
    if(n==0 || n==1){
    printf("%d is not prime", n);
    }
    else{
    for(i=2; i<n; i++){
     if(n%i == 0 && n!=2){
     not_prime=1;
     break;
     }
     }
     if(not_prime){
     printf("%d is not prime", n);
     }
     
     else{
     printf("%d is prime.", n);
     }
     }
     
    return 0;
    }