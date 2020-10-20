#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void) {

int n = 0;
int Low = -100, High = 100;
srand(time(0));
double summ_hd = 0; //сумма головної діагоналі
double summ_bd = 0; //сумма бічної діагоналі

printf("\nРозмір матриці: ");
scanf("%d", &n);

double a[n][n];
double b[n][n];

for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{
		int tmp = Low+rand()%(High - Low + 1);
		a[i][j] = tmp + pow(rand()%(100),0.1);
		if (i == j)
		{
			summ_hd += a[i][j];
		}
		if (i+j == n-1)
		{
			summ_bd += a[i][j];
		}
	}
}

printf("\n\nМатриця:\n");
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{
		printf("  a[%d][%d] = %.2lf\t", i, j, a[i][j]);
	}
	printf("\n");
}

printf("\nСумма головної діагоналі = %.2lf\n", summ_hd);
printf("Сумма бокової діагоналі = %.2lf\n", summ_bd);

if (summ_hd > summ_bd)
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[j][i] = a[i][j];
		}
	}

	printf("\n Сума елементів головної діагоналі \n більша від суми елементів бокової діагоналі \n виконується траспонування\n\n");

	printf("\n\nТраспонування матриці:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("  a[%d][%d] = %.2lf\t", i, j, b[i][j]);
		}
	printf("\n");
}
}else printf("\nТраспонування не виконується\n");
return 0;
}
