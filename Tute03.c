/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int n,X=1,Sum=0;
  printf("Enter The The Number:");
  scanf("%d",&n);
  
  while(X<=n){
    Sum = Sum +X;
    ++X;
  }

  printf("The Sum Is=%d",Sum);
  
  return 0;
}

