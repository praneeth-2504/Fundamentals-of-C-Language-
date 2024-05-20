/*
Description

John Watson just started to work as a programming trainer for Bart's Placement Cell. He is paid Rs.100 an hour, with a few exceptions. He earns an extra Rs.15 an hour for any part of a day where he works for more than 8 hours. Also, he earns a 25% bonus for working on Saturdays and a 50% bonus for working on Sundays. The bonuses for Saturday and Sunday are computed based on the hours worked on those days. You'll be given the number of hours John Watson worked on each day in a week (Sunday, Monday, ..., Saturday), and you need to compute his salary for the week.

Input Format

Input consists of 7 integers

Output Format

Print John's salary for a week.

Sample Input 1

0

8

8

8

10

6

0

Sample Output 1

4030
*/




#include <stdio.h>
int main()
{
   int work_hours[7], pay[7], daily_pay;
  	
  int total;
  
  for(int i=0; i<7; i++){
    scanf("%d",&work_hours[i]);
  }
  
  for(int j=0; j<7; j++){

    if(work_hours[j]<=8){
      daily_pay=100;
      pay[j]=work_hours[j]*daily_pay;
    }
    if(work_hours[j]>8){
      daily_pay=115;
      pay[j]=(work_hours[j]-8)*daily_pay;
      pay[j]+=8*100;
    }
    if(j==6){
      pay[6]+=pay[6]*0.25;
    }
    if(j==0){
      pay[0]+=pay[0]*0.5;
    }
	  
  }
  for(int k=0; k<7; k++){
    total+=pay[k];
	
  }
  printf("%d", total);
  
   return 0;
}




/*
This C program calculates the total weekly pay for a worker based on the number of hours worked each day. It first reads the number of hours worked each day of the week using `scanf()` and stores them in an array `work_hours`. Then, it calculates the daily pay for each day based on the number of hours worked. If the hours worked are less than or equal to 8, the daily pay rate is $100 per hour; otherwise, it is $115 per hour for the additional hours. It adjusts the pay for overtime by multiplying the additional hours by the overtime pay rate and adding it to the regular pay. Additionally, it applies a 25% bonus for Sunday (`j==6`) and a 50% bonus for Monday (`j==0`). Finally, it calculates the total weekly pay by summing up the pay for each day and prints it using `printf()`.
*/
