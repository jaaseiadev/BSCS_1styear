#include <stdio.h>


int main (){

    int subjectcount = 7;
    int total_score = 0;
    int score;
    float avg;

    printf("How many subjects do you have now? :" );

    for (int i = 1; i <= subjectcount; i++){
        printf("\nWhats the grade on the subject number %d :", i);
        scanf("%d", &score);

        total_score = score + total_score;
    }
    avg = total_score / (float) subjectcount;
    printf("\nThe total average is: %f", avg);

    if (avg >= (float)100){
        printf("\n GIATAY KA IMPOSIBLE JUD NI");
    }
    else if(avg >= 98 && avg != 100){
        printf("\n SABAOK WITH HIGHEST");
    }

    return 0;
}