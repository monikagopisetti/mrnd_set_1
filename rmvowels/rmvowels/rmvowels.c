#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<malloc.h>
#define CASES 4
#define MAX 20
// Well Done.. :)
char* rmvowels(char* str)
{
	int  i, j;
	for (i = 0; i < strlen(str); i++)
	{
		
		if (str[i] == 'a' ||str[i]=='e' ||str[i]== 'i' ||str[i]== 'o'||str[i]== 'u')
		{
			
			for (j = i; j < strlen(str); j++)
			{
				str[j ] = str[j+ 1];
			}
			i--;
		}
	
	}
	
	return str;
}
int iscompare(char* actual,char* expected)
{
	int i, flag = 1;
	for (i = 0; actual[i] != '\0'; i++)
	{
		if (actual[i] != expected[i])
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
void testcases()
{
	int i, s;
	char input[CASES][MAX] = { { "monika" }, { "bhargav" }, { "aants" }, { "aparna" } };
	char output[CASES][MAX] = { { "mnk" }, { "bhrgv" }, { "nts" }, { "prn" } };
	for (i = 0; i < CASES; i++)
	{
		s = rmvowels(input[i]);
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