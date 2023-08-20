#include <stdio.h>

int main(){
    
    double Circum ;
    double radius ;
    double area ;

    printf("Enter the radius of your circle: ");
    scanf("%lf", &radius);

    Circum = 2 * radius * 3.14159 ;
    area = 3.14159 * (radius * radius);

    printf("The cirkomperens of your sirkol is %lf\n", Circum);
    printf("The area of your sirkol is %lf\n", area);

    return 0;

}