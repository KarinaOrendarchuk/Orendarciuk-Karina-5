#include <stdio.h>

int main(void) {

int n = 0;
int m = 0;
int bil = 0;
int summ = 0;

printf("\nРозмір матриці nxm: ");
printf("\nn = ");
scanf("%d", &n);

printf("m = ");
scanf("%d", &m);

int A[n][m];

printf("\n");

for (int i = 0; i < n; i++)
{
	for (int j = 0; j < m; j++)
	{
		printf("A[%d][%d] = ", i, j);
		scanf("%d", &A[i][j]);
			if (j == 0)
			{
				bil = A[i][j];
			}
				else if (A[i][j] > bil)
				{
					bil = A[i][j];
				}
	}
	summ += bil;
}

printf("\nМатриця А:\n");
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < m; j++)
	{
		printf("A[%d][%d] = %d\t", i, j, A[i][j]);
	}
	printf("\n");
}

printf("\nsumm = %d\n", summ);
return 0;
}
