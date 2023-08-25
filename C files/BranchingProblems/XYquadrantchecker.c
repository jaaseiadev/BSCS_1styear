#include <stdio.h>

int main(){
    float x;
    float y;

    printf("XY coordinate system and determine in which quadrant the coordinate point lies");

    printf("\nEnter the X value:");
    scanf("%f", &x);

    printf("\nEnter the Y value:");
    scanf("%f", &y);

    if(x > 0 && y > 0){
        printf("Its in quadrant 1");
    }
    else if(x < 0 && y > 0){
        printf("Its in quadrant 2");
    }
    else if(x < 0 && y < 0){
    printf("Its in quadrant 3");
    }
    else if(x > 0 && y < 0){
    printf("Its in quadrant 4");
    }
    else if(x == 0 && y == 0){
    printf("Its in the origin");
    }
    

    return 0;

}