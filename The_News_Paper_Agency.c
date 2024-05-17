/*
Each Saturday, The Herald sells 'a' copies of a special edition newspaper for Rs. b per copy. The cost to him for printing each newspaper is Rs. c. He pays a fixed cost of Rs.100 per Saturday for storage, delivery, and so on. He wants to calculate the profit which it obtains only on Saturdays. Can you please help him out by writing a program to compute the profit if a, b, and c are given?

Input Format:

Input consists of 3 integers:

a, b, and c.

a is the number of copies sold, b is the cost per copy and c is the cost The Herald spends per copy.


Output Format:

The output consists of a single integer which corresponds to the profit obtained by The Herald.

Sample Input 1: 

1000

2

1

Sample Output 1: 

900

Sample Input 2: 

600

4

2


Sample Output 2: 

1100
*/

#include <stdio.h>
int main()
{
   // Try out your code here
 int a,b,c,d;
  scanf("%d %d %d ",&a,&b,&c);
d = (a * b) - (c * a + 100);
  printf("%d",d);
  
}

/*
This C program reads three integer inputs (`a`, `b`, and `c`) from the user, calculates the value of `d` using the formula `(a * b) - (c * a + 100)`, and then prints the result. However, there is an extra space after the third `%d` in the `scanf()` function, which is unnecessary and may lead to unexpected behavior. The corrected version of the code would omit this space to ensure correct input processing.
*/
