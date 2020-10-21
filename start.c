/* ante -- compile from "code" to codons.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void swapint(int *num1, int *num2);



int main(int argc, char *argv[])
{
	printf("You entered %s\n", argv[1]);
	return 0;
}





void swapint(int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

