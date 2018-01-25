/*
Se dau n şi vectorul A(i), i=1, n. Să se găsească cel mai mic element.
Start Minim
	Citeşte (n, (a(i), i = 1, n) )
	minim = a(1)
	pentru i=2,n
		dacă a(i) < minim atunci
		minim = a(i)
		sfârşit dacă
	sfârşit pentru
	Scrie (‘minimul este ’, minim )
Stop
*/

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int n, *a, minim;
	printf_s("Se citeste a(n) unde n= "); scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf_s("a(%d)=", i); scanf_s("%d", &a[i]);
	}
	minim = a[0];
	for (int i = 1; i < n; i++)
	{
		if(a[i] < minim)
		{
			minim = a[i];
		}
	}
	printf_s("Minimul este %d", minim);
	getchar();
	getchar();
}