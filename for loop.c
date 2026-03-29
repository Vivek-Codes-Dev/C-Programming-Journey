//First n natural numbers.
#include <stdio.h>

int main(){
    int n;
    
    printf("Enter n : ");
    scanf("%d", &n);
    // for( initialization, condition, increment/decrement).
    
    for(int i=0; i<=n; i++){
    printf("%d ", i);
    }
    return 0;
    }
    