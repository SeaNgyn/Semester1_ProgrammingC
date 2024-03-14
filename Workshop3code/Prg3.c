#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int getRelPos (double x, double y, double r);

int main(){
	double x, y, r;
	printf("Input a point and a circle having the center is (0,0) to check the relative position of this point with the circle\n");
	printf("The point have (x,y)\n");
	printf("x:");
	scanf("%lf", &x);
	printf("y:");
	scanf("%lf", &y);		
	do {
	printf("radius:");		
	scanf("%lf", &r);
		
	} while (0 > r);
	int result = getRelPos(x,y,r);
	if (result == 1)
		printf("The point is in the circle");
	else if (result == 0)
		printf("The point is on the circle");
	else 
		printf("The point is out of the circle");
	
	
	return 0;
}
// I: x, y ,r - point (x,y) - r: radius - O(0,0)
// P: assume point is A(1;2) and radius: 3 => OA < Radius => OA is in the circle
//    OA = sqrt((1-0)^2 + (2-0)^2) or OA^2 = (1-0)^2 + (2-0)^2 
//	  OA = 2,2340 < R=3 
// O: OA is a point in the circle
int getRelPos (double x, double y, double r){
	double d2, r2;
	d2 = x*x + y*y;
	r2 = r*r;
	if (d2 < r2)
		return 1;
	if (d2 == r2);
		return 0;
	return -1;
//	double d, d2;
//	d2 = x*x + y*y;
//	d = sqrt(d2);
//	if (d < r)
//		printf("the point is in the circle");
//	else if (d == r)
//		printf("the point is on the circle");
//	else 
//		printf("the point is out of the circle");

		
}







