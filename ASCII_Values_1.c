/*
Write a program to get a character as input and print its ASCII value.

Sample Input 1:

a

Sample Output 1:

97

Sample Input 2:

A

Sample Output 2:

65
*/



#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("%d",c);
    
    return 0;

}



// This C program reads a character input from the user using `scanf()` and stores it in a variable `c`. Then, it prints the ASCII value of the entered character using the `%d` format specifier with `printf()`. Finally, it returns 0, indicating successful execution. When you run this program, it will prompt you to enter a character, and after you enter the character, it will display its corresponding ASCII value.
