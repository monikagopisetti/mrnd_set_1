#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define CASES 4
#define MAX 2
/*
Put generalize function for it. Should work for any number of digits. Do not take number of digits as an input
*/
int largedigit(int n, int l)
{
	int  q, rm, i = 0, j, digits[10] = { '\0' }, tmp;
	while (n > 0)
	{
		q = n / 10;
		rm = n % 10;
		digits[i] = rm;
		i++;
		n = q;
	}
	for (i = 0; digits[i] != '\0'; i++)
	{
		for (j = i + 1; digits[j] != '\0'; j++)
		{
			if (digits[i]<digits[j])
			{
				tmp = digits[i];
				digits[i] = digits[j];
				digits[j] = tmp;
			}
		}
	}
	for (i = 0; digits[i] != '\0'; i++)
	{
		if (l - 1 == i)
		{
			return digits[i];
		}
	}
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
	int i,j,res;
	int input[CASES][MAX] = { { 1281,4 }, { 1932,3}, { 24,2 }, { 1,1 } };
	int output[CASES] = { { 1 }, { 2}, { 2 }, { 1 } };
	for (i = 0; i < CASES; i++)
	{
		
		res= largedigit(input[i][0], input[i][1]);
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
