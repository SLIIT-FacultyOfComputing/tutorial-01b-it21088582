/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,total;
  float ave;

  printf("Enter marks for your first subject : ");
  scanf("%d",&mark1);

  printf("Enter marks for your second subject : ");
  scanf("%d",&mark2);

  total = mark1 + mark2;
  ave = total/2.0;

  printf("average marks = %.1f",ave);

  return 0;
}

