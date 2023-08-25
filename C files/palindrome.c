#include <stdint.h>

int main(){

    char word[] = {"oten"};

    int left = 0;
    //iz minus one becase manobra og dili minusan
    int right = sizeof(word)/sizeof(word[0]) - 1 ;

    //printf("%d", right);

        //while loop nga ga compare sa left most sa array og sa rightmost
        while(right > left){
            if(word[left++] != word[right--]){
                printf("%s is NOT a palindrome", word);
                return 0;
            }
        }
        printf(" ITS A PALINDROME");


    return 0;
}