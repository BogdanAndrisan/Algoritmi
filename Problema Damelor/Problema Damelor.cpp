/*
Dame(n)
	pentru i = 1, n
		x(i) = 0{iniţial pe nici o linie nu avem poziţionată nici o regină}
	sfârşit pentru
	k = 1
	cât timp k > 0
		dacă k = n + 1 atunci
			scrie( (x(i)), i = 1, n )
			k = k − 1
		altfel
			x(k) = x(k) + 1
			dacă x(k) ≤ n atunci
				dacă DispunereCorecta(x, k)=adevarat atunci
					k = k + 1
				sfârşit dacă
			altfel
				x(k) = 0{ Nu avem nici o regină pe această linie} 
				k = k − 1{ Ne întoarcem la regina de pe poziţia anterioară} 
			sfârşit dacă{x(k) ≤ n}
		sfârşit dacă{ k = n + 1}
	sfârşit cât timp
Return
*/
/*
DispunereCorecta(x, k)
	corect = adevarat
	{ presupunem că nu avem nici un atac între regina k şi cele dispuse anterior}
	pentru i = 1, k − 1
		dacă x(k) = x(i) sau |x(k) − x(i)| = k − i atunci
			{ sunt pe aceeaşi coloană sau pe aceeaşi diagonală}
			corect = fals
		sfârşit dacă
	sfârşit pentru
	DispunereCorecta = corect
Return
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Scrie(int *x, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf_s(" %d ", x[i]);
	}
	printf_s("\n");
}

bool DispunereCorecta(int *x, int k)
{
	bool corect = true;
	for (int i = 0; i < k; i++)
	{
		if ((x[k] == x[i]) || (abs(x[k] - x[i]) == (k - i)))
		{
			corect = false;
		}
	}
	return corect;
}

int main()
{
	int n;
	printf_s("Nr. Dame(marime tabla):"); scanf_s("%d", &n);
	int *x = (int*)malloc((n) * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		x[i] = 0;
	}
	int k = 0;
	while (k >= 0)
	{
		if (k == n)
		{
			Scrie(x, n);
			k = k - 1;
		}
		else
		{
			x[k] = x[k] + 1;
			if (x[k] <= n)
			{
				if (DispunereCorecta(x, k) == true)
				{
					k = k + 1;
				}
			}
			else
			{
				x[k] = 0;
				k = k - 1;
			}
		}
	}
	getchar();
}