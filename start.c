/* ante -- compile from "code" to codons.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void swapint(int *num1, int *num2);
typedef u_int8_t uint8_t;

void filecheck(char file[255])
{
	FILE *f = fopen(file, "r");
	if (f == NULL)
	{
		printf("File wouldn't open\n");

	}
	else
	{
		printf("could open %s\n", file);




	}
}

void usage() {
	printf("usage: ante <file>\n");
	exit (1);
}






int main(int argc, char *argv[])
{


	if (argc != 2) {
		usage();
	}

	//char code[20] = load_file(argv[1]);
	filecheck(argv[1]);
	return 0;
}



void swapint(int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}



