#include<stdio.h>
                                                                                                                                        
struct vect{
	float x;
	float y;
};

int main(){
	struct vect A;
	A.x = 1.1;
	A.y = 10.5;
	
	struct vect *B;

	B = &A;
	// struct
	printf("A.x   = %f\n",A.x);
	// pointers
	printf("B.x    = %f\n",B->x);
	printf("(*B).x = %f\n",(*B).x);

	return 0;
}
