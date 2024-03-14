#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu();
int checkPrimes(n);
void printPrimes(n);
void MinMaxDigits(int n);
void printMinMaxDigits();
int main() {
	menu();
	
	
	return 0;
}

void menu(){
	int n;
	
	do{
		printf("1. Process primes\n");
		printf("2. Print min, max digit in an integer\n");	
		printf("3. Quit\n");
		printf("Selects the option from 1 to 3: ");
		scanf("%d", &n);
		
		
		switch (n){
			case 1: 
				printPrimes();
				break;
			case 2:
				printMinMaxDigits();
				break;
			case 3:
				printf("See u again!!!");
				break;		
			
			
		}
	} while (n < 3);
}


int checkPrimes(int n){
	int m;
	m = sqrt(n);
	if (n < 2)
		return 0;
	for (int i = 2; i <= m; i++)
		if (n % i == 0)
			return 0;
 
	return 1;
	
}

void printPrimes(){
	int a, r;
	do{
		printf("Input your number to check if it is prime or not:");
		scanf("%d", &a);
		
	}while (a < 2);
	
	r = checkPrimes(a);

	if (r == 1)
		printf("--> It is a prime!!!\n");
	else 
		printf("--> It is not a prime!!!\n");	
	
}




void MinMaxDigits(int n){
	int min, max, digit;
	digit = n % 10;   // de lay moc 
	n = n / 10; 
	min = max = digit;
	
	while (n > 0){
		digit = n % 10;
		n = n / 10;
		if (min > digit)
			min = digit;
		if (max < digit)
			max = digit;		
	}
	printf("Max digit: %d\n", max);
	printf("Min digit: %d\n", min);	
	
}


void printMinMaxDigits(){
	int b;
	printf("Input a positive integer to check max and min\n");
	printf("n:");
	
	do{
		scanf("%d", &b);
		MinMaxDigits(b);
	}while (b < 0);
	
	
}








