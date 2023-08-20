#include <stdio.h>
//THE FUNCTION  
    void birthday(char x[], int y){
        printf("\nHAPPY BIRTHDAY %s!!!!!!!!", x);
        printf("\nHAPPY BIRTHDAY GUWANG NAKA, %d NAKA!!!!", y);
    }

    float areaCircle(float r){
        return  3.14159 * (r * r);
    }

int main (){

    char name[] = "Jaaseia";
    int age = 16 ;
    float radius = 69.0 ;

//FUNCTION CALL

    birthday(name, age);
    float area = areaCircle(radius);
    printf("\nThe area is: %f", area);

return 0;
}