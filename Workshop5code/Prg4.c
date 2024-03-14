#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu();
void quadraticEquation(float a, float b, float c);
void inQuadraticEquation();
void BankDepositProblem();

int main() {
	menu();	
	return 0;
}

void menu(){
	int n;
	do{
		
		printf("\t1- Quadratic equation\n");
		printf("\t2- Bank deposit problem\n");
		printf("\t3- Quit\n");
		printf("\tChoose: ");
		scanf("%d", &n);
	
		switch (n){
			case 1: 
				inQuadraticEquation();
				printf("\n");
				break;
			case 2:
				BankDepositProblem();
				printf("\n");
				break;
			case 3:
				printf("======See you again!!!=======");
				break;		
			
		}
	
	
	}while (n > 0 && n < 3);

}	

	

void quadraticEquation(float a, float b, float c){
	float delta, x1, x2;
		if (a == 0)
			if (b == 0)
				printf("No solution!!!");
			else 
				printf("Has only one solution is: x = %d", (-c/b));	
		delta = b * b - 4 * a * c;
		if (delta > 0){
			x1 = ((-b + sqrt(delta)) / (2 * a));
			x2 = ((-b - sqrt(delta)) / (2 * a));	 				
			printf("The equation have two solution is x1: %.2f and x2: %.2f", x1, x2);
		}
			else if (delta == 0)
				printf("The equation has double solution is x1 = x2 = %.2f", -b / (2 * a));
		else
			printf("The equation has no solution!!!");	
							

}

void inQuadraticEquation(){
	float a, b, c;
	printf("Ax^2 + Bx + c = 0 with A:");
	scanf("%f", &a);
	printf("Ax^2 + Bx + c = 0 with B:");
	scanf("%f", &b);	
	printf("Ax^2 + Bx + c = 0 with C:");
	scanf("%f", &c);
	quadraticEquation(a, b, c);	
	
}


void BankDepositProblem(){
	double x, r, P;
	int y;
	printf("Input your deposit (a positive number): ");
	scanf("%lf", &x);
	printf("Enter the yearly rate (0.0-1.0): ");
	scanf("%lf", &r);
	printf("How many years you want to deposit[year>0]: ");
	scanf("%d", &y);
	P = x * pow((1+r), y);
	printf("\nAmount at the %d year is %.10lf ", y, P); 
	
}













