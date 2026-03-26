#include <stdio.h>

 int main(){
   
   int radius;
   int height;
   printf("Enter radius = ");
   scanf("%d", &radius);
   printf("The area of the circle with radius %d is %f \n", radius, 3.14*radius*radius);
   /* %d indicates integer.
      %f indicates float(decima number).
      */
      printf("Enter height = ");
   scanf("%d", &height);
      
      printf("The volume of cylinder with height %d is %f", height, 3.14*radius*radius*height);
   return 0;
   }