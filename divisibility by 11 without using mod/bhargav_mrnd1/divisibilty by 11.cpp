#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define CASES 3
#define MAX 10

/*
Write a Single Function which returns 0 or 1
0 if it is not divisible
1 if it is divisible
pass the number to function
*/

/*
Implement the program taking number as a integer also.
*/
int divisibility(char *str)
{
	int i=0,j=1,s1=0,d1,d2,s2=0;
	while (str[i] != '\0')  
	{
		d1=((int)str[i])-48;
		s1 = s1 + d1;
		i = i + 2;
	}
	while (str[j] != '\0')
	{
		d2 = ((int)str[j]) - 48;
		s2 = s2 + d2;
		j = j + 2;
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
	int i;
	char input[CASES][MAX] = { { "121" }, { "157" }, { "1243" } };
	int output[CASES] = { { 1 }, { 0 }, { 1 } };
	for (i = 0; i < CASES; i++)
	{
		int res = divisibility(input[i]);
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

	