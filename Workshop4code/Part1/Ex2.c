#include <stdio.h>
#include <stdlib.h>



int main() {
//	int n = 7, m = 8;
//	int*p1 = &n, *p2 = &m;
//	*p1 += 12 - m + (*p2);    // 7 + 12 - 8 + 8 = 19
//	*p2 = m + n - 2 * (*p1);	// 8 + 19 - 38 = -11	
//	printf("%d", m + n);		// 8  
	
	
	int n = 260, *p = &n;		// *p = n = 260
	printf("n = %u\n", &n);
	char*pp = (char*)p;			// *pp = dia chi cua *p
	*pp = 0;
	printf("n = %d\n", n);
	
	
	
	
	
	
	return 0;
}
