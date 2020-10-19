#include <stdio.h>
#include <string.h>



void removeSpaces(char *str);

int main(void)
{
        char ch[256];
        char help[256] = "help";
        int pressed = 0;
        int var1 = 1;
        char mode[256] = "normal";

        while (!strcmp(ch, "exit")== 0)
        {
                scanf("%s", ch);
                if (strcmp(ch, help) == 0 || pressed != 0 )
                {




		}

        }
        char str[] = " H ellO mY NAD";
	removeSpaces(str);
	printf("%d", str);
	
	return 0;
}


void removeSpaces(char *str)
{

	int count = 0;
	for (int i = 0; str[i]; i++)
	{	
		if (str[i] != ' ')
		{	
			str[count++] = str[i];


		}
	str[count] = '\0';
	}

}



void swap (int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

