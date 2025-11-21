/*
Name: ASHAZ SHAKIR PATEL
UIN: 251M003
Class: FE Mechanical Engineering
Div: F
*/
#include<stdio.h>

void counter() {
	static int count = 0;
	count ++;
	printf("Count = %d\n", count);
}

int main() {
	counter();
	counter();
	counter();

	return 0;
}
