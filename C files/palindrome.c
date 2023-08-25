// C implementation to check if a given 
// string is palindrome or not
#include <stdio.h>
#include <string.h>
  
int main()
{
    char str[] = { "abbbar" };
  
    // Start from leftmost and 
    // rightmost corners of str
    int left = 0;
    int right = strlen(str) - 1;
  
    // Keep comparing characters
    // while they are same
    while (right > left) {
        if (str[left++] != str[right--]) {
            printf("%s is not a palindrome\n", str);
            return 0;
            // will return from here
        }
    }
  
    printf("%s is a palindrome\n", str);
  
    return 0;
}