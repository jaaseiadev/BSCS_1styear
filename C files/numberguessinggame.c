#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //if constant must use ALLCAPS
    const int MIN = 1;
    const int MAX = 50;
    int guess;
    int guesses;
    int answer;

    //this is crucial and uses the current time for a seed so every run it has differnt number
    srand(time(0));

    //generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    do
    {
    printf("Your guess:");
    scanf("%d", &guess);
    if (guess<answer)
    {
        printf("Too low\n");
    }
    else if(guess>answer){
        printf("Too high\n");
    }
    else{
        printf("CORRECTTT\n");
    }
    guesses++;
    } while (answer != guess);
    
    printf("*******************\n");
    printf("Answer is: %d\n", answer);
    printf("Total number of guesses: %d\n", guesses);
    printf("*******************");

    return 0;
}