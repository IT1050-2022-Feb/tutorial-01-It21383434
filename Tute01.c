/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int Mark1,Mark2;
  float Avg,Sum;
  printf("Input Subject 1 Marks:");
  scanf("%d",&Mark1);
  printf("Input Subject 2 Marks;");
  scanf("%d",&Mark2);
  Sum= Mark1+ Mark2;
  Avg= Sum/2;

  printf("Average Is = %.2f",Avg);
  
  return 0;
}


  
