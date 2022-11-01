#include <stdio.h>
#include <stdlib.h>

char AZ(char X);

int main()
{
	char A, OP;
	printf("請輸入大寫英文字母:");
	scanf("%c", &A);

	OP = AZ(A);

	printf("%c", OP);
}

char AZ(char X)
{
	X = X + 32;
	return X;
}