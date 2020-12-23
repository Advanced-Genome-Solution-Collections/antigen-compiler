/*
	Welcome to shrek's domain.



*/

typedef u_int8_t uint8_t;




void swapint(int *num1, int *num2){

	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}


void usage(char argv[1]) {
        printf("Usage: %s <file>\n", argv);
        exit (1);
}
