/*
NAME:ASHAZ SHAKIR PATEL
UIN:251M003
CLASS:FE MECHANICAL
DIV:FE
*/

#include <stdio.h>
int main()
{
	int num1, num2;
	int choice;

	printf("\nEnter first number: ");
	scanf("%d", &num1);

	printf("Enter second number: ");
	scanf("%d", &num2);
start:
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice) {
	case 1:
		printf("Addition is: %d\n", num1 + num2);
		goto start;
	case 2:
		printf("Subtraction is: %d\n", num1 - num2);
		goto start;
	case 3:
		printf("Multiplication is: %d\n", num1 * num2);
		goto start;
	case 4:
		if (num2 != 0)
			printf("Division is: %.2f\n", (float)num1 / num2);
		else
			printf("Error: Division by zero\n");
		goto start;
	case 5:
		break;
	default:
		printf("Invalid choice\n");
		goto start;
	}

	return 0;
}
