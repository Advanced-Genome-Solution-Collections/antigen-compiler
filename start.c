#include <stdio.h>
#include <string.h>


int main(void)
{
	char ch[256];
	char help[256] = "help";
	int pressed = 0;
	int var1 = 1;
	char mode[256] = "normal";

	printf("Hello. Input 'help' for help. \n");
	while (!strcmp(ch, "exit")== 0)
	{
		scanf("%s", ch);
		if (strcmp(ch, help) == 0 || pressed != 0 )
		{
			printf("GCC :) \n");
			char entered[256] = "no";
		}


	}
	return 0;
}
int check(int var1)
{

	return 0;
}



void swap (int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}
