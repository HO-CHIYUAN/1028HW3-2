#include <stdio.h>
#include <stdlib.h>

int ans(int x1);
unsigned long long int total(unsigned long long int x2);

void main(void)
{
	int n, n2 = 1, s1, s2;

	printf("Enter stage=");	
	scanf("%d", &n);

	s1 = ans(n);
	s2 = total(100000);
	
	printf("%d ", s1);
	printf("\n-----------------\n");
	printf("%llu ", s2);
}

int ans(int x1)
{
	int a, sum[100];

	sum[0] = 0;
	sum[1] = 1;

	for (a = 2; a <= x1-1; a++)
	{
		sum[a] = sum[a-1] + sum[a-2];
	}
	return sum[x1-1];
}

unsigned long long int total(unsigned long long int x2)
{
	int b, total[100000];

	total[0] = 0;
	total[1] = 1;

	for (b = 2; b <= x2-1; b++)
	{
		total[b] = total[b - 1] + total[b - 2];
	}
	return total[x2-1];
}