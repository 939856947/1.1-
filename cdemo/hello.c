#include <stdio.h> 
int main()//Õ∞≈≈–Ú
{
	int i, j, t, book[1001],n;
	for (i = 0; i <= 1000; i++)
		book[i] = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		book[t]++;
	}
	for (i = 0; i <= 1000; i++)//…˝–Ú
	{
		for (j = 1; j <= book[i]; j++)
			printf("%d", i);
	}
	getchar();
	getchar();
	return 0;

}