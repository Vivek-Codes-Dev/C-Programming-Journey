#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int random_number = (rand() % 100 + 1);
    int number_of_guesses = 0, number_guessed;
    do{
      printf("Guess the number : ");
      scanf("%d", &number_guessed);
      if(number_guessed > random_number){
         printf("Lower.\n");
        }
      else if(number_guessed < random_number){
             printf("Higher.\n");
             }
      else{
          printf("You got the number! \n");
          }
           number_of_guesses++;
           if(number_of_guesses == 5 && number_guessed != random_number ){
             printf ("You lose!\n");
             break;
             }
             }
   while(number_guessed != random_number && number_of_guesses <= 5);
   if(number_guessed == random_number ){
   printf("You guessed the number in %d guesses.\n", number_of_guesses);
   }
   
   return 0;
   }
   
   
      
