//function with both arguements and return value
#include<stdio.h>
#include<conio.h>
float area(float,float);//declaration
float area(float r)
{
	float area;
	area=3.14*r*r;
	return area;
}
int main(){
	float r;
	printf("Enter the radius\n");
	scanf("%f",&r);
	float a=area(r);
	printf("The area is %f",a);
	return 0;
}
