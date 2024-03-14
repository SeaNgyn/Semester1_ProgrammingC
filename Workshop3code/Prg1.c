#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int prime (int n){  // n = 12
	int m = sqrt(n);
	if (n < 2)
		return 0;
	for (int i = 2; i <= m; i++) // chi can 12 chia het cho 1 so chay tu 2 cho den can 12 thi 12 ko phai prime
		if (n % i == 0)
			return 0;
	return 1;
}
int main(){
	int n;
	printf("Please input your number to check if it is prime with n>=2\n");
	
	do{
		printf("n:");
		scanf("%d", &n);		
	} while (n < 2);	
	for (int i = 2; i <= n; i++)
		if (prime(i) == 1)
			printf("%d ", i);
	
	return 0;
}

