#include <stdio.h>
int main(){

int x, y, t;
do
{
	printf("gia tri x:"); scanf("%d", &x);
	printf("gia tri y:"); scanf("%d", &y);
    t = x; x = y; y = t;   
    printf("Value is swaped: x = %d, y= %d\n", x, y);
} while (x != 0 && y != 0);

return 0 ;
}


