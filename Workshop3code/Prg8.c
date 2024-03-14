#include<stdio.h>
#include<stdlib.h>
double makeDouble (double ipart, double fraction);
int main(){
	double ipart;
	double value, fraction;
	printf("Integral part:");
	scanf("%lf", &ipart);
	do{
		printf("Fraction:");
		scanf("%lf", &fraction);	
	}while (fraction < 0);
	
 	value = makeDouble(ipart,fraction);
	printf("%lf", value);	
	
	
	return 0;
}

double makeDouble (double ipart, double fraction){ // 32 , 25 , -32
	double d_f = fraction;
	while (d_f >= 1)
		d_f /= 10; 							// 25 / 10 = 2.5
											// 2.5 / 10 = 0.25
	if (ipart < 0)
		return ipart - d_f;					
	
	return ipart + d_f;
	
	
	
}
