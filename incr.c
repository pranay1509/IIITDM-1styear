#include<stdio.h>

int main()
{
	int a , d;
	a = 20 ;
	
	d = a++;
	printf("%d",d);
	d = a;
	printf("\n%d",d);
	d = ++a;
	printf("\n%d",d);
	
	return 0;
}
