/*
Description:

Leena wanted to start a business and she was looking for a venture capitalist. Through her friend, she met a construction company owner Meena, who was interested in investing in an emerging business. Looking at the business proposal, the owner was very much impressed with Leena's work. So she decided to invest in Leena's business and hence gave a green signal to go ahead with the project. Leena got a loan of Rs. X for a period of Y years from the owner at R% interest per annum. Find the rate of interest and the total amount to be returned by Leena to the owner. The owner was impressed by the proper repayment of the financed amount and decides to give a special offer of a 2% discount on the total interest at the end of the settlement. Find the discount amount and also find the total amount given back by Leena.

Note:All rupee values should be in two decimal points.


Input Format:

Input consists of 3 floating point values.

The first one corresponds to the principal amount borrowed by Leena.

The second one corresponds to the rate of interest

The third one corresponds to the number of years.

The output consists of 4 floating point values.


Output Format:

The first value corresponds to the interest.

The second value corresponds to the amount.

The third value corresponds to the discount.

The last value corresponds to the final settlement.

All floating point values are to be rounded off to two decimal places.


Sample Input:

100

1

10

Sample Output:

10.00

110.00

0.20

109.80
*/

#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, years;
    float interest, amount, discount, settlement;
    scanf("%f %f %f", &principal, &rate, &years);
    interest = (principal * rate * years) / 100.0;
    amount = principal + interest;
    discount = 0.02 * interest;
    settlement = amount - discount;
    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", settlement);

    return 0;
}

/*
This C program calculates the interest, total amount, discount, and settlement amount for a given principal amount, interest rate, and time period. It reads the principal, rate, and time in years from the user using `scanf()`. Then, it calculates the interest using the formula `(principal * rate * years) / 100.0`, total amount by adding the principal and interest, discount as 2% of the interest, and settlement amount by subtracting the discount from the total amount. Finally, it prints these values formatted to two decimal places using `printf()`.
*/
