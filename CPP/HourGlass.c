#include<stdio.h>

int main()
{
	int n, i, j, k;

	printf("Give me the size of the hourglass: ");
	scanf("%d", &n);

	if(n < 0)
	{
		printf("Invalid input, I need a positive integer as input\n");
		return 0;
	}

	/*
	 * Prints the first n+1 rows
	 */
	for(i = n; i >= 0; i--)
	{
		for(j = n-i; j > 0; j--)
			printf(" ");
		for(j = i; j >= 0; j--)
			printf("%d", j%10);
		for(j = 1; j <=i; j++)
			printf("%d", j%10);
		printf("\n");
	}	

	/*
	 * Prints the next n rows
	 */
	for(i = 1; i <=n; i++)
	{
		for(j = n-i; j > 0; j--)
			printf(" ");
		for(j = i; j >= 0; j--)
			printf("%d", j%10);
		for(j = 1; j <=i; j++)
			printf("%d", j%10);
		printf("\n");
	}
	return 0;
}