#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int evendigitsum(char *str)
{
	int i=0,s=0,d;
	while (str[i] != '\0')
	{
		
		d = ((int)str[i])-48;
		s = s + d;
		i = i + 2;
	}
	return s;
}
int odddigitsum(char *str)
{
	int i=1, s = 0, d;
	while(str[i] != '\0')
	{
		d = ((int)str[i])-48;
		s = s + d;
		i = i + 2;
	}
	return s;
}
void main()
{
	char str[10] = { '\0' };
	int se, so;
	printf("\n enter the number");
	scanf("%s", str);
	se = evendigitsum(str);
	so = odddigitsum(str);
	if ((se - so)==0)
		printf("\n given number is divisible by 11");
	else
		printf("\n given number is not divisible by 11");
}

	