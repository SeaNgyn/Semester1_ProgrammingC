#include <stdio.h>
#include <stdlib.h>
int main(){

	int x, s = 0;
    printf("Program that will print out sum of integer inputted from the keyboard until the value 0 is inputted\n");
	do 
	{
	    scanf("%d", &x);	
	//	if (x != 0) 
			s +=x; // s = s + x;	
				
	} while (x!=0);
		printf("Total is: %d\n", s);

    
return 0 ;

}

