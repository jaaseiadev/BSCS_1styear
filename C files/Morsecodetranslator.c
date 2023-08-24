//libary nga ako gi gamit
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//morse code translator bwhahahah
//words to morse code lang dili pa vice versa

//function for the translation reference
 const char *toMorse[] = {
"A", ".-",
"B", "-...",
"C", "-.-.",
"D", "-..",
"E", ".",
"F", "..-.",
"G", "--.",
"H", "....",
"I", "..",
"J", ".---",
"K", "-.-",
"L", ".-..",
"M", "--",
"N", "-.",
"O", "---",
"P", ".--.",
"Q", "--.-",
"R", ".-.",
"S", "...",
"T", "-",
"U", "..-",
"V", "...-",
"W", ".--",
"X", "-..-",
"Y", "-.--",
"Z", "--.."
   };

//test lang kini kay ako gi kita unsaon pag compute sa position sa inig translate, const char *toMorse[] = {"A", "0", "B", 1, "C", 2, "D", 3, "E", 4, "F", 5, "G", 6, "H", 7, "I", 8, "J", 9, "K", 10, "L", 11, "M", 12, "N", 13, "O", 14, "P", 15, "Q", 16, "R", 17, "S", 18, "T", 19, "U", 20, "V", 21, "W", 22, "X", 23, "Y", 24, "Z", 25};
  

int main(){

   //gets the user input also has onle 100 character limit
   char words[100];
    printf("Enter a message: ");
    scanf("%s", words);

   //variable for the results/ aria ibutang ang resulta
    char morseTranslation[1000] = "";

   //the outerloop iterates from 0 to the letters input and for loop goes through each character in the input string one by one. It starts with the first character i=0, and it continues until all characters in the string are done.
   //For example, if the input is "KAPOY", the loop will iterate 5 times.....
//When i is 0, it will process 'K'.
//When i is 1, it will process 'A'.
//When i is 2, it will process 'P'.
//When i is 3, it will process 'O'.
//When i is 4, it will process 'Y'.

     for (int i = 0; i < strlen(words); i++) {
        char currentChar = toupper(words[i]);
        //this condition checks if the input is actually upper case and if it is true it will then go through the translation process, we then subtract the current character to A,
        // we subtract the current letter with A this is basically just kuan, 
        //ASCII shiiss and stuff thats why we onle use upper case kay sunodsunod man sila bwhahahaha
        // tahay kuan "Zebra" tahay imo itranslate into morse so Z is the first character. ASCII value of 'Z' is 90, and the ASCII value of 'A' is 65 so de answer is 25.
        // Z - A = 25 nya ato na i times 2 and answer para mo sabay saato array of characters
        // nya kanang add one its just something extra para mo sabay jud ang ato index sa kadtong sa array
        //kay for some reason 0 man nag sugod ang array kay apparently mag sugod daw ang mga computers sa 0....
        //strcat kay kuan rana mag sumpay sa mga strings as one like tahay naay duha ka separate string
        //tahay "I miss" and "You", og imo na gamitan og strcat function mahimo nang "I miss you" balik kana
        if (currentChar >= 'A' && currentChar <= 'Z') {
            int index = (currentChar - 'A') * 2 + 1;
            strcat(morseTranslation, toMorse[index]);
            strcat(morseTranslation, " ");
        }
    }


//printng the results
    printf("Morse code translation: %s\n", morseTranslation);
      
    

    return 0;
}