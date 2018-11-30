/**
 *Author: Alexis Linhardt
 *
 *Date: 11/30/2018
 *
 *This program will compute the angle of refraction given the angle of incidence using
 *Snell's law
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 
 int main(int argc, char **argv)  {
	double angleOfIncidenceDeg, angleOfIncidenceRad, refractiveIndex2;
	double angleOfRefractionDeg, angleOfRefractionRad;
	
	printf("Please enter the angle of incidence:");
	scanf("%lf", &angleOfIncidenceDeg);
	
	if(angleOfIncidenceDeg < -180 || angleOfIncidenceDeg > 180) {
		printf("Error: Please input valid angle\n");
	} else {
		printf("Please enter the index of refraction of the medium:");
		scanf("%lf", &refractiveIndex2);
		
		angleOfIncidenceRad = (M_PI/180) * angleOfIncidenceDeg;
		angleOfRefractionRad = asin((1/refractiveIndex2)*sin(angleOfIncidenceRad));
		angleOfRefractionDeg = (180/M_PI) * angleOfRefractionRad;
		
		printf("Angle of incidence: %f degrees\n", angleOfIncidenceDeg);
		printf("Index of refraction: %f \n", refractiveIndex2);
		printf("Angle of refraction: %f degrees\n", angleOfRefractionDeg);
	}
	
	return 0;
 }
 