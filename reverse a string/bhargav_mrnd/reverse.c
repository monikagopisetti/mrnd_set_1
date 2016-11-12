#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// Not accepting string with spaces in it.
int strlen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{

	}
	return i;
}
void main()
{
	int i, j;
	char temp;
	char s[30];
	printf("\n enter the string");
	scanf("%s", s);
	i = 0;
	j = strlen(s) - 1;
	printf("i=%d", i);
	while (i <= j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
	printf("j is %d", j);
	printf("\n the reversed string is:%s", s);
}