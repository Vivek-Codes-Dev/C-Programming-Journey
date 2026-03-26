#include <stdio.h>

int main() {
    
    int age;
    printf("Enter your age = ");
    scanf("%d", &age);
    
    if(age>=60){
    printf("Yes, you can drive and you are a senior citizen.");
    }
    
    else if(age>=45){
    printf("Yes, you can drive and you are an elder.");
    }
    
    else if(age>=18){
    printf("Yes, you can drive.");
    }
    else{
    printf("No, you can't drive.");
    }
    return 0;
    }