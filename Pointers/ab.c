#include <stdio.h>

int main(){
	int a;
	int *b;

	a = 5;
	b=&a;

	printf("a = %d\n",a);
	printf("b = %d\n",b);
	
	printf("*b = %d",*b);

	return 0;
}
