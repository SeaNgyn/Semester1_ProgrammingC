#include<stdio.h>
#include<stdlib.h>

void minMaxDigits (int n);

int main(){
	int n;
	do{
		printf("Input a non-negative integer and program will print out its minimum and maximum digits.\n");
		printf("n:");
		scanf("%d", &n);				
	}while (n < 0);
		minMaxDigits(n);
	return 0;
}

void minMaxDigits (int n){   // n = 123456
	int digit, min, max;
	digit = n % 10;			// digit = 6		
	n = n / 10;				// n = 12345
	min = max = digit;		// min = max = 6
	while (n > 0){			// 12345 > 0	// 1234 > 0 ... // 1 > 0
		digit = n % 10;		// digit = 5	// digit = 4	// digit = 1
		n = n / 10;			// n = 1234		// n = 123		// n = 0
		if (min > digit)	// min = 6 > 5 min = 5 ,  6 > 4 min = 4, 6 > 0 min = 0
			min = digit;
		if (max < digit)	
			max = digit;
	}
   printf("Maximum digits of a nonnegative integer integer: %d\n", max);
   printf("Minimum digits of a nonnegative integer integer: %d\n", min);
	
	
}


