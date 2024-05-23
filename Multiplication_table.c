/*
Description

Penny wanted to complete her graduation from the Community College of California. But being the newbee she is , she does not how to multiply two numbers. Sheldon being a good friend wanted to help Penny by writing a program to print the multiplication table of an integer n.

Input Format

Input consists of 2 integers. The first integer corresponds to n. The second integer corresponds to m(rows).

Output Format

Refer to the sample output for formatting specifications.

Sample Input 1

5

4

Sample Output 1

Enter n

Enter m

The multiplication table of 5 is

1*5=5

2*5=10

3*5=15

4*5=20
*/

#include <stdio.h>

int main() {
    int n, m;

    printf("Enter n\n");
    scanf("%d", &n);
    printf("Enter m\n");
    scanf("%d", &m);

    printf("The multiplication table of %d is\n", n);
    for (int i = 1; i <= m; i++) {
        printf("%d*%d=%d\n", i, n, i * n);
    }

    return 0;
}


/*
he provided C program prompts the user to input two integers, n and m, and then prints the multiplication table of the integer n up to m times. Initially, the program includes the necessary standard input-output header file by using #include <stdio.h>. The main function is defined as the entry point of the program. Inside the main function, two integer variables, n and m, are declared. The program then prompts the user to "Enter n" and reads the input value into the variable n using scanf. Similarly, it prompts the user to "Enter m" and reads the input value into the variable m. After obtaining these inputs, the program prints the message "The multiplication table of n is". A for loop is used to iterate from 1 to m, and in each iteration, it calculates the product of the current loop index i and n, printing the result in the format "i*n=product". This continues until the loop reaches the value of m. Finally, the program returns 0, indicating successful execution.
*/
