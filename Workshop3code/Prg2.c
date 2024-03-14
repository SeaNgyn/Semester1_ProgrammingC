#include<stdio.h>
#include<stdlib.h>
int validDate (int d, int m, int y){  //29/2/2022 - invalid  
									  //28/2/2022 - valid
	int maxd = 31;
	if (d < 1 || d > 31 || m < 1 || m > 12)
		return 0;
	if (m == 4 || m == 6 || m == 9 || m == 11)
		maxd = 30;
	else if (m == 2)
		if (y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0)) // neu chia het cho 400 la nam nhuan ( neu vua chia het cho 400 va 100 la nam nhuan the ky)
			maxd = 29;									// neu chia het cho 4 va chia het cho 100 thi khong phai nam nhuan vd: 1900, 2100
		else maxd = 28;
	
	return d <= maxd;
}


int main(){
	int d, m ,y;
	printf("Input the day/month/year to check if it is valid date\n");
	printf("Day/Month/Year: ");
	scanf("%d%d%d", &d, &m, &y);
		
	//printf("%d %d %d\n", validDate(d, m, y));
	if (validDate(d, m, y) == 0)
		printf("Invalid date\n");
	else 
		printf("Valid date");
	
	
	
	
	
	
	
	
	return 0;
}


