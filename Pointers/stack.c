#include<stdio.h>
#include<stdlib.h> 

int main(){
	int size = 10000000;

	int *heapArray;
	heapArray = malloc(size*sizeof(int));	

	int i;
	for (i=0;i<size;i++)
		heapArray[i] = i;

	if (heapArray == NULL){
		printf("ERROR: bad allocation of heapArray\n");
		return 1;
	}


	printf("heapArray[999999] = %d\n",heapArray[999999]);


	free(heapArray);
	heapArray = NULL;

	return 0;
}
