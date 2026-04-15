#include <stdio.h>

int main(){
    int n, a = 0, b = 1, next;
    printf("Enter number : ");
    scanf("%d", &n);
    for(int i = 1; i<= n; i++){
        for(int j = i; j >= 1; j--){
           printf("%d ", j);
           }
           printf("\n");
           }
    return 0;
    }