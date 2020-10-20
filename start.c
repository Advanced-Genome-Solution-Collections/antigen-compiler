/* ante -- compile from "code" to codons.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	printf("You entered %s", argv[1]);
	return 0;
}





void swap (int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

