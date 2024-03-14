#include <stdio.h>
#include <stdlib.h>
int main(){
	char c1, c2, t, c;
	int d;
	
	printf("C1:"); 
	scanf("%c", &c1);
	fflush(stdin);
	printf("C2:"); 
	scanf("%c", &c2);
	
	if (c1 > c2) {
		t = c1; 
		c1 = c2;
		c2 = t;
	}
	
	d = c2 - c1;
	printf("d=%d\n", d);
	for (c = c1; c <= c2; c++ )
		printf("%c:\t%d:\t%o:\t%X\n", c, c, c, c);
	
	return 0;
}

