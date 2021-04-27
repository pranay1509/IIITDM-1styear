#include<stdio.h>
int main() {
	int a;
	printf("Enter a number : ");
	scanf("%d", &a);
	if(a % 400 == 0) {
		printf("Leap Year\n");
	} else if(a % 100 == 0) {
		printf("Not a Leap Year\n");
	} else if(a % 4 == 0) {
		printf("Leap Year\n");
	} else
		printf("Not Leap Year\n"); 
	return 0;
} 
