/*
Description

Penny is celebrating her 25th birthday. Her friend Leonard promised her that he will buy her a pair of new shoes on her birthday if she solves the question asked by him. He asks Penny to find out whether the year in which she was born is a leap year or not. Help her to solve this puzzle so that she celebrates her birthday happily. If her birth year is 1995 and it is a leap year display “1995 is a leap year.” Else display “1995 is not a leap year.”

Input Format

The input consists of 1 integer.

Output Format

The output consists of 1 string.

Sample Input 

2016

Sample Output 

2016 is a leap year
*/

#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; // Leap year
    else
        return 0; // Not a leap year
}

int main() {
    int year;
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);

    return 0;
}


/*
This C program determines if a given year is a leap year. It defines a function `isLeapYear(int year)` that returns `1` if the year is a leap year and `0` otherwise. The main function reads an integer year from the user using `scanf()`, checks if it is a leap year by calling the `isLeapYear` function, and then prints the result using `printf()`. A year is considered a leap year if it is divisible by 4 but not by 100, unless it is also divisible by 400.
*/