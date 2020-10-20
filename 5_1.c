#include <stdio.h>

int main(void) {

int n = 0;
int men_0 = 0;
int summ = 0;
double ser_ar = 0;

printf("\nРозмір масиву: ");
scanf("%d", &n);

int a[n];

printf("\n");
for (int i = 0; i < n; i++)
{
	printf("a[%d] = ", i);
	scanf("%d", &a[i]);
	if (a[i] < 0)
	{
		men_0++;
	}
	summ += a[i];
}
ser_ar = summ/n;

printf("\nКількість чисел менших за нуль: %d", men_0);
printf("\nСереднє арифметичне: %.2lf\n", ser_ar);

for (int i = 0; i < n; i++)
{
	if (men_0 > ser_ar)
	{
		a[i] += 10;
	} else a[i] = 0;
}

printf("\n\nМасив:\n");
for (int i = 0; i < n; i++)
{	
	printf("a[%d] = %d\n", i, a[i]);
}


return 0;
}
