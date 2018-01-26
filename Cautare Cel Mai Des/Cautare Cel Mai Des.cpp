/*
CautaLiniar (x, v, l)
	pozitie = 0
	gasit = fals
	i = 1
	repeta
		daca x = v(i) atunci
			gasit = adevarat
			pozitie = i
		altfel
			i = i + 1
		sfarsit daca
	pana cand (i > l) sau (gasit = adevarat)
	CautaLiniar = pozitie
	return
*/
/*
Start CelMaiDes
	Citeste (n, (a(i), i = 1, n) )
	k = 0
	pentru i = 1, n
		PozInDif =CautaLiniar (a(i), diferite, k)
		daca PozInDif = 0 atunci
			k = k + 1
			diferite(k) = a(i)
			contor(k) = 1
		altfel
			contor(PozInDif) = contor(PozInDif)+1
		sfarsit daca
	sfarsit pentru
	maximApariţii = contor(1)
	pozMax = 1
	pentru i = 2, k
		daca contor(i) > maximAparitii atunci
			maximAparitii = contor(i)
			pozMax = i
		sfarsit daca
	sfarsit pentru
	Scrie (‘Numarul cel mai frecvent:’,diferite(pozMax))
	Scrie (‘Apare de ’, maximAparitii, ‘ ori’ )
Stop
*/
#include <stdio.h>
#include <stdlib.h>

int CautaLiniar(int x,int *v,int l)
{
	int pozitie = 0;
	bool gasit = false;
	int i = 0;
	do
	{
		if (x == v[i])
		{
			gasit = true;
			pozitie = i;
		}
		else
		{
			i = i + 1;
		}
	} while (i <= l && gasit == false);
	return pozitie;
}

int main()
{
	int n, *a,*diferite,*contor, k=0;
	printf_s("Se da a(n) unde n="); scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	diferite = (int*)malloc(n * sizeof(int));
	contor = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf_s("a(%d)=", i); scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		int PozInDif = CautaLiniar(a[i], diferite, k);
		if (PozInDif == 0)
		{
			k = k + 1;
			diferite[k] = a[i];
			contor[k] = 1;
		}
		else
		{
			contor[PozInDif] = contor[PozInDif] + 1;
		}
	}
	int maximAparitii = contor[1];
	int pozMax = 1;
	for (int i = 1; i <= k; i++)
	{
		if (contor[i] > maximAparitii)
		{
			maximAparitii = contor[i];
			pozMax = i;
		}
	}
	printf_s("Numarul cel mai frecvent %d apare de %d ori.", diferite[pozMax], maximAparitii);
	for (int i = 0; i < n; i++)
	{
		printf("\na(%d)=%d, diferite(%d)=%d, contor(%d)=%d", i, a[i], i, diferite[i], i, contor[i]);
	}
	getchar();
	getchar();
	return 0;
}