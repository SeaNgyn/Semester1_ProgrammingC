#include<stdio.h>
#include<stdlib.h>
// Tinh giai thua
//I: nhap so nguyen can bien n 
//P: Giong nhu nhoi con heo dat, 
//   cho bien luc dau la 0 vi de tranh gia tri rac
//   acc = 1; vi neu bang 0 thi nhan voi gi cung bang 0
//	 1! va 0! luc nao cung bang 1
//   vd: tinh 4! = 1*2*3*4 = 24
//   tinh theo vong lap for(int i = 2; i <= n; i++)
// 	 2 < 4 thoa man thi acc = 1 * 2 = 2 luc nay acc = 2 tiep tuc lap 
//   vi i++ nen luc nay i = 3, acc = 2 * 3 = 6 va i tang len 4
//   acc = 6 * 4 = 24 luc nay i tang len 5 va ko thoa man nen thoat lap nen acc = 24.
//O: in ra giai thua. 
int factorial(int n); 
int main(){
	int n, f;	
	do{
		printf("Input a positive integer to compute factorial:");
		scanf("%d", &n);
		
	} while(n < 0);
	f = factorial(n);
	printf("%d! = %d", n, f);
	
	return 0;
}

int factorial(int n){
	int acc = 1;
	if (n == 0 || n == 1)
		return 1;	
	
	for(int i = 2; i <= n; i++)
		acc = acc * i;
		return acc;	
}








