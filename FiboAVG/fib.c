#include<stdio.h>

int main(){
	// this program prints out 10 Fibonacci numbers
	int fold = 1; //that's f_0
	int fnew = 1; // thta's f_1

	printf("fold to starts is %d\n",fold);
 	printf("fnew to starts is %d\n",fnew);

	int nFibNums = 10;
	int fnext,i;

	for (i=2;i<nFibNums;i++){
		fnext = fold + fnew;
		printf("%d \n",fnext);
		// update numbers
		fold = fnew;
		fnew = fnext;
	}

return 0;
}
