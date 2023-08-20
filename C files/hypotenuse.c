#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

double A;
double B;
double C;
char roundoffcon[2];
double roundoffans;

    printf("Enter the A side of the triangle :");
    scanf("%lf", &A);

    printf("\nEnter the B side of the triangle :");
    scanf("%lf", &B);

    C = sqrt((A * A) + (B * B));
    roundoffans = round(C);

    printf("The hypotenos op your trianle is %lf\n", C);

    printf("Want to roundoff the answer? [Y/N]");
    scanf("%s", &roundoffcon);


    if(strcmp(roundoffcon, "Y") == 0){
        printf("The rounded off answer is: %lf", roundoffans);
    }

    else if (strcmp(roundoffcon, "N") == 0){
        printf("Then the answer is still: %lf", C);
    }
    
        else{
        printf("okoy");
        }

    return 0;
}