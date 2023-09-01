#include <stdio.h>

struct Students
{
    char name[12];
    float gpa;
};


int main(){

//assigning value to the structs
    struct Students student1 = {"Jaaseia", 1.2};
    struct Students student2 = {"Star", 1.3};
    struct Students student3 = {"Estrella", 1.4};
    struct Students student4 = {"Nelle", 1.5};
    struct Students student5 = {"Maria", 1.6};
    
//array of structs
    struct Students studyante[] = {student1, student2, student3, student4, student5};

    for(int i = 0; i < sizeof(studyante)/sizeof(studyante[1]); i++ ){
        // the -12s is the number of spaces
        //.2 is the number of decimals on a float
        printf("%-12s\t", studyante[i].name);
        printf("%.2f\n", studyante[i].gpa);

    }

return 0;
}