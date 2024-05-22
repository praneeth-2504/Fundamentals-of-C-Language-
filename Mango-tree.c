/*
Description

In the kingdom of Terebinthia, Leslie Burke is so much interested in gardening and hence she plants more trees in her garden. She plants trees in a rectangular fashion with the order of rows and columns and numbers the trees in a row-wise order. She planted the mango trees only in the 1st row, 1st column, and last column. So, given the tree number, your task is to find out whether the given tree is a mango tree or not. Now, write a program to check whether the given number denotes a mango tree or not.

Input Format

Input consists of 3 integers. The first input denotes the number of rows. The second input denotes the number of columns. The third input denotes the tree number.

Output Format

If the given number is a mango tree, print "Yes". Otherwise, print "No"

Sample Input 1

5

5

11

Sample Output 1

Yes

*/

#include <stdio.h>
int main()
{
    int rows, columns, tree_number;
    scanf("%d", &rows);
    scanf("%d", &columns);
    scanf("%d", &tree_number);
     if (tree_number <= rows || tree_number % rows == 1 || tree_number % rows == 0)
     {
        printf("Yes\n"); // Tree is a mango tree
    }
    else
    {
        printf("No\n"); // Tree is not a mango tree
    }
    return 0;
}



/*
The given C program determines if a specific tree in a rectangular grid orchard (with a specified number of rows and columns) is a mango tree. It reads the number of rows, columns, and the tree's number, then checks if the tree is located in the first row, or in the first or last column, by verifying if the tree number is less than or equal to the number of rows, or if it is positioned in the first column (`tree_number % rows == 1`) or the last column (`tree_number % rows == 0`). If any of these conditions are true, it prints "Yes", indicating the tree is a mango tree; otherwise, it prints "No".
*/
