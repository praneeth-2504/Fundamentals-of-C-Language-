/*
During the weekend, Ross Geller has decided to conduct some team games. He wants to split his friends into equal-sized teams. In some cases, some friends may be left out of the teams, and he wanted to use the left-out friends to assist him in conducting the team games. For instance, if there are 50 friends and they have to be divided into 7 equal-sized teams, then there will be 7 in each team and 1 friend will be left out. Ross asks for your help to automate this team-splitting task. Can you please help him out?

Input Format:

Input consists of 2 integers. 

The first integer corresponds to the number of friends Ross has. 

The second integer corresponds to the number of teams.

Output Format:

Refer sample input and output for formatting specifications.

Sample Input 1:

60

8

﻿Sample Output 1:

The number of friends in each team is 7 and left out is 4

Sample Input 2:

78

6

Sample Output 2:

The number of friends in each team is 13 and left out is 0
*/

#include <stdio.h>

int main() {
    int friends, teams;
    scanf("%d", &friends);
    scanf("%d", &teams);
   
    int per_team = friends / teams;
    
    // Calculate the number of friends left out
    int left_out = friends % teams;
    
    // Output the results
    printf("The number of friends in each team is %d and left out is %d\n", per_team, left_out);
    
    return 0;
}


/*
This C program calculates the number of friends in each team and the number of friends left out when dividing a given number of friends into a certain number of teams. It reads the number of friends and the number of teams as input from the user using `scanf()`. Then, it calculates the number of friends in each team by dividing the total number of friends by the number of teams. Additionally, it computes the number of friends left out by finding the remainder of the division. Finally, it prints the number of friends in each team and the number left out using `printf()`, formatted as specified, and returns 0 to indicate successful execution.
*/