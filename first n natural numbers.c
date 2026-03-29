//First n natural numbers.
#include <stdio.h>

int main(){
    int n, i=1;
    
    printf("Enter n : ");
    scanf("%d", &n);
    
    printf("First %d natural numbers are  ", n);
    do{
    printf("%d, ", i++);
    
    }while(i<=n);
    return 0;
    }
