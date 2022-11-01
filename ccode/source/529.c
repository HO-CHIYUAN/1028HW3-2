#include <stdio.h>
#include <stdlib.h>

int ans(int x,int y);

int main()
{
	int a, b, ANS, op;
	
	printf("Enter 2 integers:\n");
	scanf("%d %d", &a, &b);

	ANS = ans(a, b);
	op = (a*b) / ANS;

	printf("最小公倍數=%d", op);

	return 0;
}

int ans(int x, int  y)
{
	int i = 2, w = 1, z;

	while (x >= i && y >= i)
	{
		while (x%i == 0 && y%i == 0)
		{
			w = w * i;
			x /= i;
			y /= i;
		}
		i++;
	}

	return w;
}