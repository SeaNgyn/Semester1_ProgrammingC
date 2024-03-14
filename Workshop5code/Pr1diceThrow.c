#include <stdio.h>
#include <stdlib.h>



int main() {
	int count = 0, total, x, y;
	do{
		printf("Total sought: ");
		scanf("%d", &total);
		
		
	}while (total < 2 || total > 12);

	do{
		x = (rand() % 6) + 1; 
		y = (rand() % 6) + 1;
		count++;
		printf("Result of throw %d: %d + %d\n", count, x, y);
		
		
	}while (x + y != total);
	
	if (total == x + y)
		printf("You got your total in %d throws", count);
	
	
	
	
	
	return 0;
}


