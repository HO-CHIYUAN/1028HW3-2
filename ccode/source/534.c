#include <stdio.h>
#include <stdlib.h>

int ANS(int a, int b);

int main(void)
{
	int ex, ba, x, q;

	printf("Enter base and exponemt (exponemt>0):\n");
	printf("base=");
	scanf("%d", &ba);
	printf("exponemt=");
	scanf("%d", &ex);

	x = ANS(ba, ex);

	printf("power(%d,%d)=", ba, ex);

	for (q = 1; q <= ex - 1; q++)
	{
		printf("%d*", ba);
	}
	printf("%d", ba);

	return 0;
}

int ANS(int a, int b)
{
	int i, j[100];
	j[0] = 1;
	
	for (i = 1; i <= b; i++)
	{
		j[i] = j[i - 1] * a;
	}
	return j[b];
}