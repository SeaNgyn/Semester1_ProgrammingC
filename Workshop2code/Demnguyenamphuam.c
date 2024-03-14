#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
char ch;
int nVowels = 0, consonants = 0, nOther = 0;
printf("Nhap chuoi ky tu: ");
	
do
{
	ch = getchar(); 
	//scanf("%c", &ch);
	//ch = toupper(ch); //ch += + 32;
	if (ch>='A' && ch<='Z'){
		switch(ch){
			case'A': 
			
			case'E': 
			case'I': 
			case'O': 
			case'U': 
				nVowels++; 
				break;
			default: consonants++; } 		 	
  } else nOther = nOther++;
}
while (ch != '\n');
printf("Number of vowels:%d\n", nVowels);
printf("Number of consonants:%d\n", consonants);		
printf("Number of others:%d\n", nOther);	
	
	

	return 0;
}


