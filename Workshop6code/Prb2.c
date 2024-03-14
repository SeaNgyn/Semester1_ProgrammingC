#include<stdio.h>
#include<stdlib.h>

void menu();
double checkNumber(int *n, char buffer);
void addAvalue(int a[], int* size);
void searchValue(int a[], int size);
void inArray(int a[], int size);
void ascendingOrder(int a[], int size);
void valuesInArrange(int a[], int size);
//int size=0;

int main(){
	int n, size = 0;
	int choose;
	char buffer;
	int a[100];
	int i = 0;
	do{
		menu();
		do {
			
			printf("\t\nSelect your option:");
			choose = checkNumber(&n, buffer);
			
				if (choose < 1 || choose > 6){
					printf("Input your number from 1 to 6\n");
					
				}
			
			
		}while (choose < 1 || choose > 6);
		
		switch (choose){
			case 1: 	
				addAvalue(a, &size);
				printf("\n");
				break;
			case 2:
				searchValue(a, size);
				printf("\n");
				break;	
			case 3:
				inArray(a, size);
				printf("\n");
				break;				
			case 4:
				valuesInArrange(a, size);
				printf("\n");
				break;
				
			case 5:
				ascendingOrder(a, size);
				printf("\n");
				break;
			case 6:
				printf("\tSee u again!!!\t");
				break;
				
				
				
			
		}
		
	} while (n != 6);

	return 0;
}

void menu(){
	
	printf("\n\t 1- Add a value\n");
	printf("\n\t 2- Search a value\n");
	printf("\n\t 3- Print out the array\n");
	printf("\n\t 4- Print out values in a range\n");
	printf("\n\t 5- Print out the array in ascending order\n");
	printf("\n\t 6- Quit\n");
	
}

double checkNumber(int *n, char buffer){
	do{
	scanf("%d", n);
	scanf("%c", &buffer);
	fflush(stdin);

		if (buffer != 10){
			printf("\nInput again your number from 1 to 5\n");
			printf("Input again: ");	
		}
		else
			return *n;		
		
		
	}while (buffer != 10);

	
	
}

void addAvalue(int a[], int* size){	
	scanf("%d", (a + *size));		
	(*size)++;
	printf("------You was inputted--------");
	
}

void searchValue(int a[], int size){
	int pos = -1;
	int b, i;
	
	if (size == 0){

		printf("\tNot Found the value\n");
		return;
	}		
	printf("\tInput your value to find it in array: ");
	scanf("%d", &b);

	for(i = 0; i < size; i++)
		if (a[i] == b){
			pos = i;
			break;
		}
		if (pos == -1)
			printf("\tNot Found the value\n");
		else 
			printf("\tThe value is %d was found at %d location", b, (pos + 1));
		
	
}

void inArray(int a[], int size){
	int i;
	
	if (size == 0){
	
		printf("\tThe array is not exist.");
		return;
	}
	
	printf("\tThe array you was inputted is\n");
		for (i = 0; i < size; i++)
			printf("\t%d\t", *(a + i));
	
}

void ascendingOrder(int a[], int size){
	int i, j, t;
	
	if (size == 0){
	
		printf("\tThe array is not exist.");
		return;
	}
	
	for (i = 0; i < size - 1; i++)
		for (j = i + 1; j < size; j++)
			if (a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				
			}
	for (i = 0; i < size; i++)		
		printf("\t%d\t", a[i]);	
	
	
	
}


void valuesInArrange(int a[], int size){
	int x, y, i;
	
	if (size == 0){
	
		printf("\tThe array is not exist.");
		return;
	}
	printf("Min: ");
	scanf("%d", &x);
	printf("Max: ");
	scanf("%d", &y);	
		for (i = 0; i < size; i++)
			if (a[i] >= x && a[i] <= y)
				printf("\t%d\t", a[i]);
	
	
}
