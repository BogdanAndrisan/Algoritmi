/*
Start Invertie
	Citeste(n, (a(i), i=1,n))
	Pentru i=2,n
		k=a(i)
		j=i-1
		cat timp j>0 si a(j)>k
			a(j+1) = a(j)
			j=j-1
		sfarsit cat timp
		a(j+1)=k
	sfarsit pentru
	Scrie("Sirul sortat", a(i))
Stop
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, *a, k, j;
	printf_s("Se da a(n) unde n="); scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf_s("a(%d)=", i); scanf_s("%d", &a[i]);
	}
	for (int i = 1; i < n; i++)
	{
		k = a[i];
		j = i-1;
		while (j >= 0 && a[j] > k)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = k;
	}

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf_s("(%d,", a[i]);
			continue;
		}
		if (i == n - 1)
		{
			printf_s("%d)", a[i]);
			continue;
		}
		printf_s("%d,", a[i]);
	}
	getchar();
	getchar();
}