#include <stdio.h>

int main(){

    int array [] = {1,2,3,4,5};
    //dis just to reverse the values
    for(int i = sizeof(array)/sizeof(array[0]) - 1; i <= sizeof(array)/sizeof(array[0]); i--){
        printf("%d", array[i]);
    }



    return 0;
}