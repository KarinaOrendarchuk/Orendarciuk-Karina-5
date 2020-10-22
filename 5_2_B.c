#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

int n = 0;
int min_7 = 0; // числа менші за 7
int dod_1 = -1; // перше додатне число
int dod_2 = -1; // друге додатне число
int summ = 0;  // сума елементів від 1 до останнього додатного числа
int Low = -100, High = 100;
srand(time(0));

printf("\nРозмір масиву: ");
scanf("%d", &n);

int a[n];

printf("\n");
for (int i = 0; i < n; i++)
{
	a[i]=Low+rand()%(High - Low + 1);
	if (a[i] < 7)
	{
		min_7++;
	}
	if (a[i] > 0 && dod_1 == -1)
	{
		dod_1 = i;
	}
	if (a[i] > 0)
	{
		dod_2 = i;
	}
}

printf("\n\nМасив:\n");
for (int i = 0; i < n; i++)
{	
	printf("a[%d] = %d\n", i, a[i]);
}

printf("\n1) кількість елементів масиву,\n   менших за число сім: %d\n", min_7);

if (dod_1 == -1 && dod_2 == -1)
{
	printf("\n2) В масиві немає додатних чисел\n");
}
	else if (dod_1 == dod_2)
	{
		printf("\n2) В масиві тільки одне додатне чисело\n");
	} 
		else if (a[dod_1] != -1 && a[dod_2] != -1)
		{

			for (int i = dod_1; i <= dod_2; i++)
			{
				summ += a[i];
			}
		printf("\n2) Сума елементів масиву,\n   розташованих між першим й останнім\n   додатними елементами: %d\n", summ);
		}

return 0;
}