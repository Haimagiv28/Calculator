#include <stdio.h>
#include <math.h>
#include <conio.h>

int logAtobaseB(int a, int b)
{
	return log2(a) / log2(b);
}

void main()
{
	double a, b, answer;
	int invoiceAction;
	char yesNo;
	
	do{
		printf("What operation would you like to do?\n");
		printf("For Addition press 1\n");
		printf("For Subtraction press 2\n");
		printf("For Multiplication press 3\n");
		printf("For Division press 4\n");
		printf("For Pow press 5\n");
		printf("For Modulo press 6\n");
		printf("For Log_a_b press 7\n");
		scanf_s("%d", &invoiceAction);
		printf("Enter the first number value : \n");
		scanf_s("%lf", &a);
		printf("Enter the second number value : \n");
		scanf_s("%lf", &b);

		switch (invoiceAction) {
		case 1: answer = a + b;
			printf("The result is : %.2lf", answer);
			break;

		case 2: answer = a - b;
			printf("The result is : %.2lf", answer);
			break;

		case 3: answer = a * b;
			printf("The result is : %.2lf", answer);
			break;

		case 4: if (b != 0) {
			answer = a / b;
			printf("The result is : %.2lf", answer);
		}
			  else {
			printf("Number can't be divided by 0");
		}
			break;

		case 5: answer = pow (a,b);
			printf("The result is : %.2lf", answer);
			break;

		case 6: answer =  (int)a % (int)b;
			printf("The result is : %.2lf", answer);
			break;

		case 7: answer = logAtobaseB(a, b);
			printf("The result is : %.2lf", answer);
			break;

		default: printf("Wrong input!");

		}
		printf("\nwould you like to continue? y/n\n");
		yesNo = _getch();

	} while (yesNo == 'y');

	printf("\nGOODBEY!!\n");
	
	
}