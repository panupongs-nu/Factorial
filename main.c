/*================================================
Program: Factorial
Objective: หาค่า n!
Input: n (integer)
Output: nfact (long int)
Programmer: Panupong Sornkhom (panupongs@nu.ac.th)
Version: 1.0 Date: 2020-07-30
================================================*/
#include <stdio.h>
#include <stdlib.h>   // for exit()

int main(void) {
  /* Variable declaration */
  // nfac for store result
  // mp = multiplier
  // n = number to find factorial
  long int nfac = 1;
  int n, mp;

  /* Read input */
  printf("Enter a positive integer number n: ");
  scanf("%d",&n);
  if (n<0) {
    printf("Error! n has to be a positive integer.\n");
    exit(1);     // exit program
  }

  /* Process */
  for (mp=n;mp>0;mp--) {    
    nfac = nfac*mp;       // n! = nx(n-1)x(n-2)...x3x2x1
  }                       // end loop for

  /* Display result */
  printf("%d! = %ld \n",n,nfac);  
  return 0;
}             



