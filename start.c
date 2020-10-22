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
void usage() {
	printf("usage: gc <file>");
	exit (1);
}





uint8_t *load_file(char *filename)
{
	FILE *f;
	int size;
	uint8_t *code = NULL;
	struct stat st;
	if ((f = fopen(filename, "r"))){
		printf("file exists");		
	} else {
		printf("ERROR: cannot open file. Does it exist?");
	}


}
int main(int argc, char *argv[])
{
	printf("You entered %s\n", argv[1]);
	
	if (argc != 2) {
		usage();
	}

	char code[20] = load_file(argv[1]);

	return 0;
}



void swapint(int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

