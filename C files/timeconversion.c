#include <stdio.h>
#include <math.h>

int main(){

    int day;
    int output;
    int hours;
    int output_sec;
    int output_min;

    printf("TIME CONVERSION\n");
    printf("Days to hours\n");
    printf("Enter how many day/s\n");
    scanf("%d", &day);

    output = day * 24;
    output_sec = output * 3600;
    output_min = day * 1440;
    printf("%dday/s is %dhours, %dminutes and %dseconds", day, output, output_min, output_sec);

    return 0;
}