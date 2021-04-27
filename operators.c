//operators in c programming
#include<stdio.h> 
void main()
{
	int a,b,sum,subtract,multiply,remainder,greater,lesser,increment,decrement;
	float divide;
	
	printf("enter any two numbers:");
	scanf("%d %d", &a ,&b);
	
	sum = a+b;
	subtract = a-b;
	multiply = a*b;
	divide  = a/b;
	remainder = a%b;
	greater = a>b;
	lesser = a<b;
	
	//arthimetical operators
	printf("\nsum of given two numbers = %d ", sum ); 
	printf("\nsubtraction of given two numbers = %d ", subtract );
	printf("\nmultiplication of the given two numbers = %d", multiply );
	printf("\ndividing first number from second  number = %f", divide );
	printf("\nremainder on dividing first number from second number = %d", remainder );
	//relational operators
	printf("\ngreater number from given two numbers = %d", greater );
	printf("\nlesser number from given two numbers = %d", lesser ); 
	
	printf("\n\nenter a number: ");
	scanf("%d", &a);
	

	
    //doubt---->
	increment = a++;
	decrement = a--;
	//increment and decrement operators
	printf("\nthe incremented number = %d", increment );
	printf("\nthe decremented number = %d", decrement);
	
	getch();
}
