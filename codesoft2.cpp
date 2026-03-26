#include <stdio.h>
int main()
{
	float a,b;
	int op;
	printf("The list of arithematic operations you can choose:\n 1)Addition\n 2)Subtraction\n 3) Multiplication\n 4)Divison\n");
	printf("Enter which operation you want to choose like 1 or 2 or 3 or 4:");
	scanf("%d",&op);
	printf("Enter your first number:");
	scanf("%f",&a);
	printf("Enter your second number:");
	scanf("%f",&b);
	switch(op)
	{
		case 1:printf("Addition:%2f",a+b);
		       break;
		case 2:printf("Subtraction:%2f",a-b);
		       break;
		case 3:printf("Multiplication:%2f",a*b);
		       break;
		case 4:printf("Divison:%2f",a/b);
		       break;
		default:printf("invalid input type");
	}
	return 0;
}
