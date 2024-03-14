#include <stdio.h>
#include <stdlib.h>


void menu();
int validDate(int d, int m, int y);
void inValidDate();
void characterData(char c1, char c2);
void inCharacterData();

int main() {
	menu();
	
	return 0;
}

void menu(){
	int n;
	do{
		
		printf("\t1- Processing date data\n");
		printf("\t2- Character data\n");
		printf("\t3- Quit\n");
		printf("\tChoose: ");
		scanf("%d", &n);
	
		switch (n){
			case 1: 
				inValidDate();
				break;
			case 2:
				inCharacterData();
				break;
			case 3:
				printf("======See you again!!!=======");
				break;		
			
		}
	
	
	}while (n > 0 && n < 3);

}	
int validDate(int d, int m, int y){
	int maxd=31;
	if(d <1 || d>31 || m<1 || m >12) 
		return 0 ;
	if( m ==4 || m == 6 || m ==9 || m == 11) 
		maxd = 30;
	
		else if(m==2) {
			if ( y%400==0 || y%4==0 && y%100!=0 ) 
				maxd=29;
	else maxd=28;
}
return d <= maxd;	
}

void inValidDate(){
	int d, m, y;
	printf("Enter the day: " ); 
	scanf("%d", &d);
	printf("Enter the month:"); 
	scanf("%d", &m);
	printf("Enter the year: "); 
	scanf("%d", &y);
	if (validDate(d, m, y)==1)
		printf ("The date of %d/%d/%d is a valid date!\n", d, m ,y);
	else
		printf("The date of %d/%d/%d is not a valid date!\n", d, m ,y);			

	
	
}	
	
void characterData(char c1, char c2){
	char c;
	if (c1 < c2){  // a = 97 , c = 99
	
		c = c1; 	// c = a
		c1 = c2;	// c1 = c
		c2 = c;		// c2 = a
	}
	for (c = c1; c >= c2; c--)
		printf("%c: %d, %Xh\n", c, c, c);	
}	
	
void inCharacterData(){
	char c1, c2;
	fflush(stdin);
	printf("Input 2 characters:\n");
	printf("Character 1: ");	
	scanf("%c", &c1);
	fflush(stdin);
	printf("Character 2: ");		
	scanf("%c", &c2);	
	characterData(c1, c2);	
}
