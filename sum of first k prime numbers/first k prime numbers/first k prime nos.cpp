#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define CASES 4
// Question to find sum of first k prime numbers.. 
// But Not to find sum of prime numbers till the given number
int primesum(int k)
{
	int i=2, j,count=0,sum=0,flag;
	while (count < k)
	{
		flag = 1;
		for (j = 2; j <= i / 2; j++)
		{
			if (i%j == 0)
			{
				i++;
				flag = 0;
				break;
			}
		}	
		if (flag == 0)
		{
			continue;
		}
			count++;
			sum = sum + i;
		    i++;
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
void testcase()
{
	int input[CASES] = { { 10 }, { 25 }, { 1 }, { 3 }};
	int output[CASES] = { { 129 }, { 1060 }, { 2 }, { 10 } };
	int res,i;
	for (i = 0; i < CASES; i++)
	{
		res = primesum(input[i]);
		if (iscompare(res, output[i]))
			printf("\npassed");
		else
			printf("\nfailed");
	}
	printf("\n");
}
void main()
{
	testcase();
}