#include <stdio.h>

int fibonacci(){
    int first = 0;
    int second = 1;
    int next  = 0;
    int numbertimes = 10;
    int sum;

    for( int i = 1; i <= numbertimes; i++){
        if(i <= 0){
            next = i;
        }
        else{
            next = first + second;
            first = second;
            second = next;
        }
            if(next % 2 == 0){
                sum = next + sum;
            }
        printf("\n%d", next);
    }
    printf("\nThe total sum of all the even numbers is: %d", sum);
  
}

int main(){

    fibonacci();

    return 0;
}