#include<stdio.h>

int main() {
	int input;

	scanf("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		for (int k = 1; k <= input - i; k++)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
