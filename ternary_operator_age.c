#include <stdio.h>

int main() {
    
    int a, b;
    // Condition ? expression-if-true : expression-if-false
    printf("Enter your age = ");
    scanf("%d", &a);
    
    printf("Enter your friend's age = ");
    scanf("%d", &b);
    
    a>b? printf("You are elder") : printf("Your friend is elder");
    
    
    return 0;
    }