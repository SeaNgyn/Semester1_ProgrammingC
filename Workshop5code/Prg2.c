#include <stdio.h>
#include <stdlib.h>



int main() {
	int count, total, x, y;
	do{
		printf("Total sought: ");
		scanf("%d", &total);
		
		
	}while (total < 2 || total > 20);
	count = -1; 
	

	do{
		count += 2;
		x = (rand() % 10) + 1; 
		y = (rand() % 10) + 1;
		
		printf("Result of picks %d and %d: %d + %d\n", count, count + 1, x, y);
		
		
	}while (x + y != total);
	
	if (total == x + y)
		printf("You got your total in %d picks", count + 1);
	
	
	
	
	
	return 0;
}


