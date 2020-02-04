#include<stdio.h>
#include "fibFun.h"

int main(){
	// query user for numbers to print ***
	int N;
	printf("Enter the number of Fibonacci numbers to print:");
	scanf("%d",&N);

	// call the fibPrinter function to print out the numbers
	fibPrint(N);

	return 0;
}
