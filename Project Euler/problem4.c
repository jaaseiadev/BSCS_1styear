#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//function to check wider its a palindrome or not
bool isPalindrome(n){
    //converting the integer input to an string so we can compare the valueee
    char str[20];
    sprintf(str, "%d", n);

    //the comparison variable index the left is 0 bekows ara mag start ang unang number
    //og kanang sa right is basically ang lenght sa atong number og pila sila ka characters
    //usually manobra manag usa og imo imeasure ilang lenght so ako gi minusan
    int left = 0;
    int right = strlen(str) - 1;
  
    // Keep comparing characters from left then at the same time sa right
    // while they are same
    // dungan sila gi compare left og right og dili gani sila pareha mao to mo return zzzzz
    while (right > left) {
        if (str[left++] != str[right--]) {
            return 0;
            // will return from here
        }
    }
  
    printf("%s is a palindrome\n", str);

}

int main(){
    //declaring variable
    int prod;
    int largestpal = 0;
    //for loop lang para maka times og 100*100 - 101*101 to 999*999
        for(int i = 100; i < 999; i++ ){
        for(int j = 100; j < 999; j++){
            prod = i * j;
            //maldita ni siya nga condition
            //di mo gana og dili palindrome
            //kuan if the current product is a palindrome AND it's larger than the largest palindrome we've found so far in the for loop, 
            //update the largestpal with the value of the current product."
            if(isPalindrome(prod) && prod > largestpal){
                largestpal = prod;
            }
        }
    }

    printf("%d is the largest Palindrome",largestpal);
        
    return 0;

    
}