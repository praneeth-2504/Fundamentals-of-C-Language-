/*
Description:

Kamal was traveling from Korea to USA and he was not aware of the currency system of USA. Can you please help him to add two dollars and cents?

Note: 1 dollar=100 cents

Input Format

Input consists of 4 integers. The first two inputs correspond to the value of the first dollar and cent. The next two inputs correspond to the value of the second dollar and cent.

Output Format

The output should print the sum of dollars and cents.

Sample Input

30

10

140

99

Sample Input

171

9
*/

#include <stdio.h>
int main() {
    int dollar1, cent1, dollar2, cent2;
    int total_dollars, total_cents;
    scanf("%d %d %d %d", &dollar1, &cent1, &dollar2, &cent2);
    total_cents = cent1 + cent2;
    total_dollars = dollar1 + dollar2 + (total_cents / 100);
    total_cents %= 100;
    printf("%d\n%d\n", total_dollars, total_cents);
    return 0;
}

/*
This C program reads two amounts of money (in dollars and cents) as input from the user and calculates their sum. It then prints the total amount in dollars and cents separately. Firstly, it reads the dollar and cent components of both amounts using `scanf()`. Then, it adds the cents and dollars separately, adjusting for any carryover when the cents exceed 100. Finally, it prints the total amount in dollars and cents using `printf()`.
*/
