#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int num,guess,noguesses=5,time_;
  time_t t;

  srand((unsigned) time(&t));
  num = rand()%21;
  for(time_=1;time_<=noguesses;++time_){
    printf("Guess a number between 0 and 20 inclusive: ");
    scanf("%d",&guess);
    if (guess<0 || guess>20){
      printf("Invalid input,the number is between 0 and 20 inclusive!!\n");
    }
    else{
      if(guess == num){
        printf("You guessed it right!!\ncongrats\n");
        printf("You had %d fails.",time_-1);
        break;
      }
      else if(guess>num){
        printf("You guessed the number wrong, my number is less than that.\n");        
      }
      else{
        printf("You guessed it wrong, my number is greater than that.\n");
      }
    }
    printf("You have %d chances left\n",noguesses-time_);
  }

  if (time_>5 && guess!=num){
    printf("Sorry out of chance.The num was %d", num);
  }
}