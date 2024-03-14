#include <stdio.h>
#include <stdlib.h>


int t (int x, int y, int z);
//void T (int *p, int*q);
int T (int*p, int*q);
int main() {
//	int L, M, a = 7, b = 6, c = 5;
//	
//	L = t(b,a,c);
//	printf("%d\n", L);
	
//	T(&a, &b);
	
	int a = 10, b = 3, c;
	 
	c = T(&a, &b);
	printf("%d\n", c);
	
	
	return 0;
}

int t (int x, int y, int z){
	int k = (2*x) + (3*y) + (5*z);
	return k % 13;
	
}

//void T (int *p, int*q){
//	int t;
//	t = *p;		// t = 7
//	*p = *q;	// a = 6
//	*q = t;		// b = 7
//	
//	
//	
//	printf("%d\n", *q);
//	
//}


int T (int*p, int*q){
	int t;
	t = (*p) + (*q) > 12 ? 5:6; // nhu if else neu dung thi lay gia tri la 5 con ko la 6
	
	return t * t % 5 ;
	
}



