#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define CASES 4
// Dont show result inner iterations. Only Show the final Sum
int sumofdigi(int n)
{
	int m, o, sum = 0;
	while (n > 0)
	{
		m = n % 10;
		o = n / 10;
		n = o;
		sum = sum + m;
	}
	return sum;
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
	int s,i;
	int input[CASES]= { { 1 }, { 23 }, { 346 }, { 4010 } };
	int output[CASES] = { { 1 }, { 5 }, { 13 }, { 5 } };
	for (i = 0; i < CASES; i++)
	{
		s = sumofdigi(input[i]);
		if (iscompare(s, output[i]))
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