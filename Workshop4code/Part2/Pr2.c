#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu();
int checkFibonacci(int n);
void fibonacci();
int validDate(int d, int m, int y);
void printValidDate();
int main() {
	menu();
	return 0;
}

void menu(){
	int n;
	
	do{
		printf("1. Fibonacci sequence\n");
		printf("2. Check a date\n");	
		printf("3. Quit\n");
		printf("Selects the option from 1 to 3: ");
		scanf("%d", &n);
		
		
		switch (n){
			case 1: 
				fibonacci();
				break;
			case 2:
				printValidDate();
				break;
			case 3:
				printf("See u again!!!");
				break;		
			
			
		}
	} while (n < 3);
}


int checkFibonacci(int n){
	int t1 = 1, t2 = 1, f = 1;
	if (n == 1)
		return 1;
	while (f < n){
		f = t1 + t2;
		t1 = t2;
		t2 = f;	
	}	
	return n == f;	
}

void fibonacci(){
	int a, r;
	do{
		printf("Input your number to check if it is fibonacci or not:");
		scanf("%d", &a);
		
	}while (a < 1);
	
	r = checkFibonacci(a);

	if (r == 1)
		printf("--> It is a Fibonacci!!!\n");
	else 
		printf("--> It is not a Fibonacci!!!\n");	
	
}




int validDate(int d, int m, int y){
	int maxd = 31;
	if (d < 1 || d > 31 || m < 1 || m > 12)
		return 0;
	if (m == 4 || m == 6 || m == 9 || m == 11)
		maxd = 30;	
	else if	(m == 2)
		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
			maxd = 29;
		else 
			maxd = 28;
	return d <= maxd;		
		
}


void printValidDate(){
	int d, m ,y;
	printf("Input the day/month/year to check if it is valid date\n");
	printf("Day/Month/Year: ");
	scanf("%d%d%d", &d, &m, &y);
		
	//printf("%d %d %d\n", validDate(d, m, y));
	if (validDate(d, m, y) == 0)
		printf("Invalid date\n");
	else 
		printf("Valid date\n");
	
}








