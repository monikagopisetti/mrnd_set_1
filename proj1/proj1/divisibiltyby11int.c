#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define CASES 4
int divisibility(int n)
{
	int s1 = 0, s2 = 0;
	while (n > 0)
	{
		int rm, ed, od, q;
		q = n / 100;
		rm = n % 100;
		ed = rm / 10;
		od = rm % 10;
		s1 = s1 + ed;
		s2 = s2 + od;
		n = q;
	}
	if ((s1 - s2) == 0)
		return 1;
	else
		return 0;
}
int iscompare(int actual, int expected)
{
	if (actual == expected)
		return 1;
	else
		return 0;
}
void testcases()
{
	int i, res;
	int input[CASES] = { { 121 }, { 143 }, { 154 }, { 11 } };
	int output[CASES] = { { 1 }, { 1 }, { 1 }, { 1 } };
	for (i = 0; i < CASES; i++)
	{
		res = divisibility(input[i]);
		if (iscompare(res, output[i]))
			printf("\npassed");
		else
			printf("\nfailed");
	}
	printf("\n");
}
void main()
{
	testcases();
}