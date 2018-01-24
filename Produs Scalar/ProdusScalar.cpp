/* 
Se defineste produsul scalar a doi vectori A si B, de aceasi dimensiune n cu formula:
PS = sum(i=1,n, A(i)*B(i)
Sa se scrie algoritmul pentru calculul produsului scalar

START PScalar
	Citeste(n, (a(i)), i=1,n), (b(i)), i=1,n))
	PS = 0
	pentru i= 1,n
		PS = PS + a(i)*b(i)
	sfarsit pentru
	scrie("Produsul Scalar este: ", PS)
STOP
*/
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int n,PS=0;
	printf_s("Marimea lui n: "); scanf_s(" %d", &n);

	int *a = (int*)malloc(n * sizeof(int));
	int *b = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		printf_s("a(%d)=", i); scanf_s(" %d", a + i);
		printf_s("b(%d)=", i); scanf_s(" %d", b + i);
		PS = PS + *(a + i) * *(b + i);
	}
	printf("Produsul Scalar este: %d", PS);

	getchar();getchar();
	free(a);
	free(b);
}

