#include <stdio.h>

long long largestprime(long long number){
    long long primefactor = 2;

    while (number > 1){
      if (number % primefactor == 0){
        number = number / primefactor;
      } 
      else{
        primefactor++;
      }
    }
    return primefactor;
}

int main(){

    long long number = 600851475143;
    long long resutls = largestprime(number);
    printf("%lld", resutls);

    
    return 0;

}