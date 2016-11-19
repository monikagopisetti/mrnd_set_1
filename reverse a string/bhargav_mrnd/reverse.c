#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#define CASES 4
#define MAX 20
// Not accepting string with spaces in it.
int strlen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{

	}
	return i;
}
char* revstring(char* s)
{
	int i, j;
	char temp;
	i=0;
	j = strlen(s) - 1;
	while (i <= j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
	return s;
}
int iscompare(char* actual, char* expected)
{
	int flag = 1, i;
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
	int i;
	char* res;
	res = (char*)malloc(CASES*sizeof(char));
	char input[CASES][MAX] = { { "monika" }, { "i am good girl" }, { "aparna" }, { "bhargav" } };
	char output[CASES][MAX] = { { "akinom" }, { "lrig doog ma i" }, { "anrapa" }, { "vagrahb" } };
	for (i = 0; i < CASES; i++)
	{
		res = revstring(input[i]);
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
