// find area of rectangle
#include<stdio.h>
void main()
{
	float l;
	float b;
	float  area;
	
	printf("please enter the length and breadth of the rectangle");
	scanf("%f %f",&l,&b);
	printf("length=",l,"br=",b);

    area = l*b;
    printf("the required area is %f", area); 
    
} 
