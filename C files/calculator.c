#include <stdio.h>

int main(){
    int age;
    char name[25]; //bytes

    printf("Whats your name?");
    fgets(name, 25, stdin); // for inputting last name

    printf("\nWhat is your age?");
    scanf("%d", &age);
    
  
    printf("\nYou are %d years old Mr.%s", age,name);
    return 0;
}
 