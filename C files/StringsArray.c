#include <stdio.h>
#include <string.h>

int main(){
    
    char affirmations[][30] = {"You are loved.", "Keep shining.",
"You matter.",
"Believe in yourself.",
"Stay strong.",
"You've got this.",
"Keep going.",
"You're enough.",
"Embrace today.",
"You're amazing.",
"Keep smiling.",
"You're resilient.",
"Stay positive.",
"You inspire.",
"You're valued.",
"Keep pushing.",
"You're beautiful.",
"Stay hopeful.",
"You're capable."};

//you cant change the value of the strings on an array so you have to use this

strcpy(affirmations[0], "Ayaw pag shifttt");

    for(int i = 0; i < sizeof(affirmations)/sizeof(affirmations[0]); i++){
        printf("\n%s", affirmations[i]);
    }
    return 0;
}