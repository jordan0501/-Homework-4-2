#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main()
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int pass;
	size_t i;
	int hold;
	int n = 1, m;
	puts("Data items in original order");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	puts("");
	for (pass = 1; pass < SIZE; ++pass)
	{
		m = 0;
		for (i = 0; i < SIZE - n; ++i)
		{

			if (a[i]>a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
			m = m + 1;
		}
		printf("%d\n", m);
		n++;
	}
	puts("\nData items in ascending order");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	puts("");
	system("pause");
	return 0;
}