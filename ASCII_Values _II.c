/*
Write a program to get a number (ASCII value) as input and print its equivalent character.

Sample Input 1:

119

Sample Output 1:

w

Sample Input 2:

105

Sample Output 2:

i
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
   
    char character = (char)a;
    
    // Print the equivalent character
    printf("%c\n", character);
    
    return 0;
}



/*
This C program reads an integer input from the user using `scanf()`. It interprets this integer as an ASCII code for a character and converts it to a character type. Then, it prints the corresponding character using `printf()`. Finally, it returns 0, indicating successful execution.
*/