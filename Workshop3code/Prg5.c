#include<stdio.h>
#include<stdlib.h>
double fibo (int n);
int main(){
	int n, result;
	do{
		printf("Input a position to compute the value of Fibonacci:");
		scanf("%d", &n);
		fflush(stdin);
		
	} while(n < 1);
	result = fibo(n);
	printf("Position %d is: %d", n, result);
	
	return 0;
}


double fibo (int n){
	
	int t1 = 1, t2 = 1, f = 1;
	for (int i = 3; i <= n; i++){
		f = t1 + t2;
		t1 = t2;
		t2 = f;	
		}
	return f;

}


