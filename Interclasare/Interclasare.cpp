/*
Start Interclasare
	citeşte( n, (A(i), i = 1, n) )
	citeşte( m, (B(j), j = 1,m) )
	k = 0
	i = 1
	j = 1
	repetă
		k = k + 1
		dacă A(i) < B(j) atunci
			C(k) = A(i)
			i = i + 1
		altfel
			C(k) = B(j)
			j = j + 1
		sfârşit dacă
	până când i > n sau j >m
	pentru il = i, n
		k = k + 1
		C(k) = A(il)
	sfârşit pentru
	pentru jl = j, m
		k = k + 1
		C(k) = B(jl)
	sfârşit pentru
scrie(C(kl), kl = 1, m + n)
Stop
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, *a, *b;
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf_s("a(%d)=", i); scanf_s("%d", &a[i]);
	}
	b = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < m; i++)
	{
		printf_s("a(%d)=", i); scanf_s("%d", &b[i]);
	}
}