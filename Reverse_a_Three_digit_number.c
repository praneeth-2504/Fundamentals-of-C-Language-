/*
Description

Write a program to reverse a 3-digit number.

Input Format

Input consists of an integer.

Output Format

The output will be the reverse of the input integers.

Sample Input

456

Sample Output

654
*/
#include <stdio.h>

int main() {
    int num, reversedNumber = 0, remainder;
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    printf("%d", reversedNumber);
    return 0;
}

/*
This C program reverses an integer input provided by the user. It reads an integer `num` using `scanf()`. Then, it iteratively extracts the last digit of `num` using the modulo operator and appends it to `reversedNumber`. This process continues until `num` becomes zero, effectively reversing the digits of the original number. Finally, it prints the reversed number using `printf()`
*/