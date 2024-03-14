#include <stdio.h>
 int main(){ 
 int pa = 9000000; // personal pending amount ( month )
 int pd = 3600000; // alimony for each his/ her dependent ( month ) 
 float income, n, tf, ti;
 
 printf("Your income of this year: "); scanf("%f", &income);
 printf("Number of dependent: "); scanf("%f", &n);
 
 tf = 12 * (pa + (n*pd));
 printf("Tax-free income: %.2f\n", tf); 
 
 ti = income - tf; // Taxable income (thu nhap chiu thue)
 
 	if (ti <= 0){	
	    printf("Taxable income: 0\n");
 		printf("Income tax: 0\n"); }
    else if ( ti <= 5000000){
	    printf("Taxable income: %.3f\n", ti);
 		printf("Income tax: %.3f\n", ti * 5/100); }
 	else if (ti > 5000000 && ti <= 10000000 ){
 		printf("Taxable income: %.3f\n", ti);
 		printf("Income tax: %.3f\n", 5000000 * 5/100 + (ti - 5000000) * 10/100);}
	else if (ti > 10000000 && ti <= 18000000){
		printf("Taxable income: %.3f\n", ti);
		printf("Income tax: %.3f\n", 5000000 * 5/100 + 5000000 * 10/100 + (ti - 10000000) * 15/100);} 
	else{
		printf("Taxable income: %.3f\n", ti);
		printf("Income tax: %.f\n", 5000000 * 5/100+ 5000000 * 10/100 + 8000000 * 15/100 + (ti-18000000) * 20/100);}	
		
	 return 0 ; 
	}

