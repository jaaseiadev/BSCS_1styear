/*
Bubble sort is a basic algorithm for arranging a string of numbers or other elements 
in the correct order. 
The method works by examining each set of adjacent elements in the string, 
from left to right, switching their positions if they are out of order.
*/

#include <stdio.h>
//this is an example of an bubble sort algo
//this will arrange the array by value. 1 - 9
//this will basically swap the value from left to right if its not in the same position
void sort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int k = 0; k < size - 1; k++){
            if(array[k] > array[k+1]){
                int temp = array[k];
                array[k] = array[k+1];
                array[k+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d", array[i]);
    }
}


int main (){

    int array[] = {6,9,1,3,2,4,5,8,7};

    int size = sizeof(array)/ sizeof(array[0]);

sort(array, size);
printArray(array, size);




    return 0;
}