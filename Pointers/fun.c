#include<stdio.h>

struct myNewStruct{
	int myInt;
	float myFlt;
};

int myFunction( struct myNewStruct *A){
	A->myFlt = 10.5;
	return 0;
}

int main(){
	struct myNewStruct A;
	A.myInt  = 3;
	A.myFlt  = -2.1;

	int flag = myFunction(&A);

	printf("myFlt after calling myFuntion %f \n",A.myFlt);

 
	return 0;
}
