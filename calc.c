#include <stdio.h>
int main() {
	char operator;
	double a, b;
	printf("Enter the operator you need : ");
	scanf("%c", &operator);
	printf("Enter 2 numbers : ");
	scanf("%lf %lf", &a, &b);
	switch (operator) {
		case '+' :
			printf("%.1lf + %.1lf = %lf\n", a, b, a+b);
			break;
		case '-' :
			printf("%.1lf - %.1lf = %lf\n", a, b, a-b);
			break;
		case '*' :
			printf("%.1lf * %.1lf = %lf\n", a, b, a*b);
			break;
		case '/' :
			printf("%.1lf / %.1lf = %lf\n", a, b, a/b);
			break;
		default :
			printf("Enter a valid operator\n");
	}
	return 0;
}
