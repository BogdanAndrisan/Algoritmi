/*
Cautare cel mai des pentru un vector sortat.
Start CelMaiDes
	StartSir = 1
	EndSir = 1
	lungimeSecventaMaxima = 0
	suntInSir = adevărat
	cât timp suntInSir = adevărat
		cât timp (EndSir) ≤ n şi (a(StartSir) = a(EndSir))
			EndSir = EndSir + 1
		sfârşit cât timp
		dacă EndSir−StartSir>LungSecvMax atunci
			apareMaxim = a(StartSir)
			LungSecvMax= EndSir − StartSir
		sfârşit dacă
		StartSir = EndSir
		dacă StartSir > n atunci
			suntInSir = fals
		sfârşit dacă
	sfârşit cât timp
	Scrie (‘Numărul cel mai frecvent:’,apareMaxim)
	Scrie (‘Apare de’,LungSecvMax, ‘ ori’ )
Stop
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int StartSir = 0, EndSir = 0, lungimeSecventaMaxima = 0,n,*a, apareMaxim;
	printf_s("Se da a(n) unde n="); scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf_s("a(%d)=", i); scanf_s("%d", &a[i]);
	}
	bool suntInSir = true;
	while (suntInSir)
	{
		while (EndSir <= n && a[StartSir] == a[EndSir])
		{
			EndSir = EndSir + 1;
		}
		if (EndSir - StartSir > lungimeSecventaMaxima)
		{
			apareMaxim = a[StartSir];
			lungimeSecventaMaxima = EndSir - StartSir;
		}
		StartSir = EndSir;
		if (StartSir > n)
		{
			suntInSir = false;
		}
	}
	printf_s("Numarul cel mai frecvent %d apare de %d ori.",apareMaxim,lungimeSecventaMaxima);
	getchar();
	getchar();
}