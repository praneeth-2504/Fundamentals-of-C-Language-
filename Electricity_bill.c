/*
Description

In the city of Rajkot, Gujarat the Golden company is taking care of the expenses for the Court's discussion room. Due to continuous discussions regarding the upcoming 'Ring Road' project at Rajkot, the electricity bill was high and they need to pay it with all the money they have.

The electricity board has decided to charge money based on the units consumed by a particular home. If the units consumed are less than or equal to 200, the cost for one unit is 0.5paise. If the unit is less than or equal to 400, the cost for one unit is 0.65paise plus Rs.100 extra charge. If the unit is less than or equal to 600, the cost for one unit is 0.80paise plus Rs.200 extra charge. If the unit is greater than 600 the cost for one unit is Rs.1.25 plus Rs.425 extra charge. You need to calculate the electricity bill based on the units consumed.

Input Format

Input consists of one integer which corresponds to the units consumed.

Output Format

The output consists of one integer which corresponds to the electricity bill in Rupees.

Sample Input

200

Sample Output

Rs.100

Explanation

Here, the units consumed are equal to 200, and the cost for one unit is 0.5. Hence the electricity bill will be Rs.100.

*/

#include <stdio.h>

int main() {
    int units, bill;
    scanf("%d", &units);
    if (units <= 200) {
        bill = units * 0.5;
    } else if (units <= 400) {
        bill = units * 0.65 + 100;
    } else if (units <= 600) {
        bill = units * 0.80 + 200;
    } else {
        bill = units * 1.25 + 425;
    }
    printf("Rs.%d\n", bill);

    return 0;
}



/*
This C program calculates the electricity bill based on the number of units consumed. It reads the number of units from the user using `scanf()`. The bill is then calculated using different rates depending on the range of units consumed: 

- If the units are less than or equal to 200, the rate is `0.5` per unit.
- If the units are between 201 and 400, the rate is `0.65` per unit plus an additional `100`.
- If the units are between 401 and 600, the rate is `0.80` per unit plus an additional `200`.
- If the units exceed 600, the rate is `1.25` per unit plus an additional `425`.

The final calculated bill is printed using `printf()`, prefixed with "Rs.".
*/