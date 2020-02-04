#include<stdio.h>

int main(){
	// this program prints out 10 Fibonacci numbers
	int fold = 1; //that's f_0
	int fnew = 1; // thta's f_1

	printf("fold to starts is %d\n",fold);
 	printf("fnew to starts is %d\n",fnew);

	int nFibNums;
	printf("Enter how many Fibonacci numbers you wish to print\n");
	scanf("%d",&nFibNums);
	if (nFibNums < 0)
		printf("Warning you input %d, but code expect a positive integer",nFibNums);
	
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
