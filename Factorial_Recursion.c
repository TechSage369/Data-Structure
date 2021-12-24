#include <stdio.h>
int main() {
	int a, b, updated, series, i;
	printf("Enter number of series: ");
	scanf("%d", &series);
	printf("Enter first sequence number: ");
	scanf("%d", &a);
	printf("Enter second sequence of number: ");
	scanf("%d", &b);
	series -= 2;
	printf("%d, %d, ", a, b);
	updated = a + b;
	for (i = 1; i <= series; i++)
	{
		printf("%d, ", updated);
		a = b;
		b = updated; updated = a + b;
	}
	return 0;
}