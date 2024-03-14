#include <stdio.h>
#include <stdlib.h>
int main() {	
	double num1, num2; 
	char op; 
	printf(" nhap so thu nhat:");
	scanf("%lf", &num1);
	printf(" nhap so thu hai:");
	scanf("%lf", &num2);
	getchar();
	do
	{
	printf("nhap dau:");
	scanf("%c", &op);
	getchar();
	}
	
	while(op!='+' && op!='-' && op!='*' && op!='/');
    double result;
	switch (op)
	{
		case '+': result = num1 + num2;
		printf("result: %lf", result);
		break;
		
		case '-': result = num1 - num2;
		printf("result: %lf", result);
		break;
		
		case '*': result = num1 * num2;
		printf("result: %lf", result);
		break;
			
		case '/': result = num1 / num2;
		printf("result: %lf", result);
		break;	
				
	}
	
	
	
	
	
	return 0;
}

 

