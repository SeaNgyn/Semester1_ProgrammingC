#include <stdio.h>
#include <stdlib.h>



int main() {
	int n = 7, m = 6;
	int*pn = &n;
	int*pm = &m;
	*pn = *pm + 2*m - 3*n;  // 6 + 2*6 - 3*7 = -3 -> n = -3
	*pm -= *pn;				// 6 - ( - 3 )	= 9	-> m = 9	
	printf("%d", m + n);	// 9 - 3 = 6.
	getchar();
	
	char c1 = 'A', c2 = 'F';  // A: 65 F: 70
	char*p1 = &c1;
	char*p2 = &c2;
	*p1 += 3;				// 65 + 3 = 68 -> c1 = 68 ( D )	
	*p2 -= 5;				// 70 - 5 = 65 -> c2 = 65 ( A )
	printf("%d", c1 - c2);	// 68 - 65 = 3 
	
	double x = 3.2, y = 5.1;
	double*p1 = &x;
	double*p2 = &y;
	*p1 += 3 - 2 * (*p2);  // 3.2 + 3 - 2*5.1 = -4 -> x = -4.000000
	*p2 -= 3 * (*p1);	   // 5.1 - 3*(-4.000000) = 17.100000 -> y = 17.100000
	printf("%lf", x + y);	// -4.000000 + 17.100000 = 13.100000
	
	
	
	
	
	
	
	
	return 0;
}
