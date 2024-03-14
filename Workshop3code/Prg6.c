#include<stdio.h>
#include<stdlib.h>
int fibo (int n);
int main(){
	int n, r;
	do{
		printf("Input a positive integer to check if is an element of the Fibinacci sequence or not\n");
		printf("n:");
		scanf("%d", &n);
		
	} while(n < 1);
	r = fibo(n);
	if (r == 1) 
		printf("It is a Fibonacci element");
	else 	
		printf("It is not a Fibonacci element");		
	return 0;
}
int fibo (int n){
	int t1 = 1, t2 = 1, f = 1;
	
	if (n == 1)
		return 1;
	while(f < n){
		f= t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return n == f;		
}


