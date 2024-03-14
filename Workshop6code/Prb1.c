#include<stdio.h>
#include<stdlib.h>
int checkIsbn(int n);
int main(){
	int n, r;
	printf("Input a number (10 digits or 0 to stop) to check whether the number is an ISBN or not\n");
	printf("n:");
	scanf("%d", &n);			
	r = checkIsbn(n);
	if (r == 1)
		printf("This ISBN is valid");
	else 
		printf("This ISBN is not valid");
	return 0;
}

int checkIsbn(int n){
	int I[11];
	int C[11];
	int i;
	int sum = 0;
	int count[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
	
	if (n > 1000000)
		for (i = 10; i > 0; i--){
			I[i] = n % 10;
			n = n / 10;		
		}
	
	for (i = 1; i < 10; i++){
		C[i] = I[i] * count[i - 1];
		sum = sum + C[i];
	}
	if ((sum + I[10]) % 11 == 0)
		return 1;
	
	
}















