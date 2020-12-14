/* ante -- compile from "code" to codons.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define MAXCHAR 1000


void swapint(int *num1, int *num2);
typedef u_int8_t uint8_t;




char* fileread(char file[255])
{

	char str[MAXCHAR];
	FILE *f = fopen(file, "r");
	if (f == NULL)
	{
		printf("The file wouldn't open. The file may either not exist, or have an incorrect path.\n");

	}
	else
	{
		printf("Opening %s... \n", file);
		while (fgets(str, MAXCHAR, f) != NULL)
		{
			printf("%s", str);
		}
	}
	if (f != NULL){
		fclose(f);

	}

	char *ret = malloc(MAXCHAR);
	return (ret);


}

void usage(char argv[1]) {
	printf("Usage: %s <file>\n", argv);
	exit (1);
}

int main(int argc, char *argv[])
{


	if (argc != 2) {
		usage(argv[0]);
	}

	//char code[20] = load_file(argv[1]);
	fileread(argv[1]);
	return 0;
}



void swapint(int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}



