#include<stdio.h>

// data representating one experiment
struct experData{
	float temp; // temperature [degrees F]
	float pres; // preasure [MPa]
};

int main(){
	// this program compute average temp and pressure
	int nExp = 3;
	struct experData  experA;	
	struct experData  experB;
	struct experData  experC;

	//experiment A
	experA.temp = 40.25;
	experA.pres = 10.1;

	//experiment B
	experB.temp = 102.3;
	experB.pres = 15.2;

	// experiment C
	experC.temp = 98.2;
	experC.pres = 55.2;

	// printing 
	printf("temperature array\n");
	printf("%f %f %f\n",experA.temp,experB.temp,experC.temp);

	// calculate the average
	float TempAVG = (experA.temp+experB.temp+experC.temp)/3;
	float PresAVG = (experA.pres+experB.pres+experC.pres)/3;

	printf("Average Temp = %f\nAverage Pressure = %f\n",TempAVG,PresAVG);

	return 0;
}
