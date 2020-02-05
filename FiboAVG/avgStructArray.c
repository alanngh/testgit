#include<stdio.h>

// data representating one experiment
struct experData{
	float temp; // temperature [degrees F]
	float pres; // preasure [MPa]
};

int main(){
	// this program compute average temp and pressure
	int nExp = 3;
	struct experData exper[nExp];
	//experiment A
	exper[0].temp = 40.25;
	exper[0].pres = 10.1;

	//experiment B
	exper[1].temp = 102.3;
	exper[1].pres = 15.2;

	// experiment C
	exper[2].temp = 98.2;
	exper[2].pres = 55.2;

	// printing 
	printf("temperature array\n");
	printf("%f %f %f\n",exper[0].temp,exper[1].temp,exper[2].temp);

	// calculate the average
	float TempAVG = (exper[0].temp+exper[1].temp+exper[2].temp)/3;
	float PresAVG = (exper[0].pres+exper[1].pres+exper[2].pres)/3;

	printf("Average Temp = %f\nAverage Pressure = %f\n",TempAVG,PresAVG);

	return 0;
}
