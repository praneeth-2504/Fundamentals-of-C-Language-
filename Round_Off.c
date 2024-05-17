/*
Write a program to get a float value from the user and display it in the below-mentioned format.

HINT: Use ceil() and floor() functions from the header file.


Input & Output Format:

Input consists of one float value.

The output consists of one integer, its rounded-up value, and its rounded-down value.


Sample Input 1:

54.5



Sample Output 1:

54

55

54


Sample Input 2:

66.7


Sample Output 2:

66

67

66
*/


#include <stdio.h>
int main()

{
float a;
  
  scanf("%f",&a);

printf("%0.0f\n",floor (a));

printf("%0.0f\n",ceil(a));
  
printf("%0.0f\n",floor (a));
}

/*
This C program reads a floating-point number input from the user using `scanf()` and stores it in a variable `a`. Then, it prints the floor value of the input number using the `floor()` function from the `math.h` library, rounded down to the nearest integer using the `%0.0f` format specifier with `printf()`. Next, it prints the ceil value of the input number using the `ceil()` function from the `math.h` library, rounded up to the nearest integer. Finally, it prints the floor value of the input number again. However, the correct output for the floor value is printed twice, as there seems to be an error in the code*/