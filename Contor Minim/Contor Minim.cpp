/*
Start ContorMinim
	Citeste(n, (a(i), i = 1, n))
	minim = a(1)
	contor = 1
	pentru i = 2, n
		daca minim > a(i) atunci
			minim = a(i)
			contor = 1
		altfel
		daca minim = a(i) atunci
			contor = contor + 1
		sfarsit dacă
		sfarsit dacă
	sfarsit pentru
	Scrie(‘minimul este ’, minim)
	Scrie(‘apare de ’, contor, ’ ori’)
Stop
*/

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int n, minim, contor = 1, *a;
	printf_s("Se specifica a(n) unde n="); scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf_s("a(%d)=", i); scanf_s("%d", &a[i]);
	}
	minim = a[0];
	for (int i = 1; i < n; i++)
	{
		if (minim > a[i])
		{
			minim = a[i];
			contor = 1;
		}
		else if (minim == a[i])
		{
			contor = contor + 1;
		}
	}
	printf_s("Minimul este %d", minim);
	printf_s(" si apare de %d ori", contor);
	getchar();
	getchar();
	free(a);
	return 0;
}