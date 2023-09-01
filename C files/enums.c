#include <stdio.h>
//declare enum
    enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};


int main(){

    enum Day today = Sat;

    if(today == Fri){
        printf("Yeyyyyy 4:00PM to 5:30PM ra ako klase");
    }
    else if(today == Sat){
        printf("Naay CWTSSSSSS 7:00am");
    }

    return 0;
}