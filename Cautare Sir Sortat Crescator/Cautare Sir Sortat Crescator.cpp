/*
Se da n, vectorul A(i), i=1,n si un numar x
Sa se scrie un algoritm care gaseste indicele pentru care A(y) = x

START Cautare
	citeste(n, (a(i),i=1,n), x)
	gasit = fals
	i=1
	repeta
		daca a(i) = x atunci
			gasit = adevarat
			pozitie = i
		altfel i=i+1
		sfarsit daca
	pana cand(i>n) sau (gasit=adevarat) sau (x>a(i))
	daca gasit = adevarat atunci
		Scrie("S-a gasit", x, "pe pozitia", poz)
	altfel
		Scrie(x,"nu a fost gasit")
	sfarsit daca
STOP
*/

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int n, x, i = 0, pozitie;
	bool gasit = false;
	printf_s("Marimea lui n: "); scanf_s(" %d", &n);
	printf_s("Cauta pentru x= "); scanf_s(" %d", &x);
	int *a = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		printf_s("a(%d)=", i); scanf_s(" %d", &a[i]);
	}

	do
	{
		if (a[i] == x)
		{
			gasit = true;
			pozitie = i;
		}
		else
		{
			i = i + 1;
		}
	} while (i < n && gasit == false && x<=a[i]);

	if (gasit == true)
	{
		printf_s("S-a gasit %d pe pozitia %d.", x, pozitie);
	}
	else
	{
		printf_s("%d nu s-a gasit.", x);
	}
	getchar();
	getchar();
	free(a);
}