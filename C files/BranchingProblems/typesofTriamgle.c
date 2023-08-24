#include <stdio.h>

int main(){

    int side_a;
    int side_b;
    int side_c;

    printf("Angle A: ");
    scanf("%d", &side_a);

    printf("Angle B: ");
    scanf("%d", &side_b);

    printf("Angle C: ");
    scanf("%d", &side_c);

        //Equalatiral
        if(side_a == side_b && side_a == side_c && side_b == side_c){
            printf("its a equalitaeral triangle");
        }
        else if(side_a != side_b && side_a != side_c && side_b != side_c && side_b != side_a){
            printf("ITS A ISOCELES");
        }
    else{
        printf("its a samting");
    }
    return 0;
}