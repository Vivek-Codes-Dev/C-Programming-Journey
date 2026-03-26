#include <stdio.h>

int main(){

    int m1, m2, m3;
    printf("Enter marks1 : ");
    scanf("%d", &m1);
    
    printf("Enter marks2 : ");
    scanf("%d", &m2);
    
    printf("Enter marks3 : ");
    scanf("%d", &m3);
    
    if(m1<33 || m2<33 || m3<33){
    printf("You are failed due to less marks in an individual subject(s). ");
    }
    
    else if((m1 + m2 + m3)/3 < 40){
    printf("You are failed due to less percentage. ");
    }
    
    else 
    printf("Your are passed.");
    
    return 0;
    
    
}