#include<stdio.h>
#include<stdlib.h>
int gcd (int a, int b);
int lcm (int a, int b);

int main(){
	int a, b, d, m;
	
	do{
		printf("Input two positive integers to find their greatest common divisor and least common multiple\n");
		printf("a: ");
		scanf("%d", &a);
		printf("b: ");
		scanf("%d", &b);				
	} while (a <= 0 || b <= 0 );
	d = gcd (a,b);
	m = lcm (a,b);
	printf("Greatest common divisor: %d\n", d);
	printf("Least common multiple: %d", m);
	return 0;
}

int gcd (int a, int b){    // a = 4, b = 6 co UCLN la 2.

	while (a != b)
		if (a > b)
			a = a - b;
		else 
			b = b - a;
		return a;
}

int lcm (int a, int b){   // a = 4, b =6 co BCNN la 12.
	return a * b / gcd(a,b);
	
	
}
