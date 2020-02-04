#include<stdio.h>

int main(){
	// this program compute average temp and pressure
	int nExp = 3;
	float temp[nExp]; // array of temperatures
	float pres[nExp]; // array of pressures	

	//experiment A
	temp[0] = 40.25;
	pres[0] = 10.1;

	//experiment B
	temp[1] = 102.3;
	pres[1] = 15.2;

	// experiment C
	temp[2] = 98.2;
	pres[2] = 55.2;

	// printing 
	printf("temperature array\n");
	printf("%f %f %f\n",temp[0],temp[1],temp[2]);

	// calculate the average
	float TempAVG = (temp[0]+temp[1]+temp[2])/3;
	float PresAVG = (pres[0]+pres[1]+pres[2])/3;

	printf("Average Temp = %f\nAverage Pressure = %f\n",TempAVG,PresAVG);

	return 0;
}
