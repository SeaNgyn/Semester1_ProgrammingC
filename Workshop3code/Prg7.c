#include<stdio.h>
#include<stdlib.h>
int sumDigits (int n);
int main(){
	
	int n, s;
	do{
		printf("Nhap n:");
		scanf("%d", &n);
	if (n >= 0){
		s = sumDigits(n);
		printf("S = %d\n", s);
	}
	
    } while(n >= 0);
	return 0;
}

int sumDigits (int n){          // n = 13
	int sum = 0;
	do{
		int remainder = n % 10; // 13 % 10 = 3
		n = n / 10; 			// n = 13 / 10 = 1
		sum += remainder; 		// sum = 0 + 3 = 3
								// 1 % 10 = 1
								// n = 1 / 10 = 0
								// sum = 3 + 1 = 4
		
	}while(n > 0);				// n = 0
	return sum;					// sum = 4
	
}

