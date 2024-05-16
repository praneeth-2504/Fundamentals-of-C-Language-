/* Student Details:



Write a program to print the details of a student. The student's details consist of his/her name, age, CGPA, and grade.



Input Format:

The input consists of one string, one integer, one float, and one character.

The string corresponds to the name of a student.

The integer corresponds to the age of a student.

The float corresponds to the CGPA of a student.

The character corresponds to the grade of a student.



Output Format:

The output prints all the details of a student.

Refer to the sample Output.



Note: The CGPA (float value) should be printed with 2 decimal places.



Sample Input 1:

Rajeev

20

8.6467

B

Sample Output 1:

Name: Rajeev

Age: 20

CGPA: 8.64

Grade: B



Sample Input 2:

Meera

18

9.123

A



Sample Output 2:

Name: Meera

Age: 18

CGPA: 9.12

Grade: A
*/

  
#include <stdio.h>

void print_student_details(char name[], int age, float cgpa, char grade) {
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", cgpa);
    printf("Grade: %c\n", grade);
}

int main() {
    char name[100];
    int age;
    float cgpa;
    char grade;

    scanf("%s", name);
    scanf("%d", &age);
    scanf("%f", &cgpa);
    scanf(" %c", &grade);

    print_student_details(name, age, (floor(cgpa*100)/100), grade);

    return 0;
}


/*The program starts by including the <stdio.h> header file, which allows it to use functions like printf() and scanf(). It defines a function print_student_details() to print the details of a student such as name, age, CGPA, and grade. In the main() function, it declares variables name (as an array of characters), age (as an integer), cgpa (as a floating-point number), and grade (as a character). It then reads input from the user using scanf() for the student's name, age, CGPA, and grade. The program then calls the print_student_details() function, passing the entered details. Inside the function, it prints these details with appropriate formatting using printf(). Finally, the main() function returns 0, indicating successful execution. Overall, the program allows the user to input a student's details and prints them out neatly formatted.*/




