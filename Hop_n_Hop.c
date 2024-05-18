/*
Description:

Peter Rabbit lives in a colony. He is the only rabbit in his colony who is not able to hop. On his 5th birthday, his father Rabbit gifted him a pogo stick as he could not jump like the other rabbits. He is so excited to play with the pogo stick. The pogo stick hops one unit per jump. He wanders around his house jumping with pogo sticks. He wants to show the pogo stick to his friend and decides to go using his pogo stick. Write a program to find the number of hops needed to reach his friends' house (x,y). Assume that Peter Rabbit's house is in the coordinates (3,4).

Input Format

Input consists of two integers x and y.

Output Format

The output is an integer. It corresponds to the number of hops needed to reach his friend's house.

Sample Input

5 

10 

Sample Output

6
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x, y, d, p;
    scanf("%d", &x);
    scanf("%d", &y);
    d = sqrt(((x - 3) * (x - 3)) + ((y - 4) * (y - 4)));
    p = (int)floor(d);
    printf("%d", p);
    return 0;
}


/*
This C program calculates the distance from a given point `(x, y)` to another point `(3, 4)` in the Cartesian coordinate system. It reads the coordinates `x` and `y` from the user using `scanf()`. Then, it calculates the distance `d` using the Euclidean distance formula: \(\sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}\). Next, it rounds down the distance to the nearest integer using `floor()` from the `math.h` library and stores it in variable `p`. Finally, it prints the rounded distance `p` using `printf()`.
*/