#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
Write a Single Function which returns 0 or 1
0 if it is not divisible
1 if it is divisible
pass the number to function
*/

/*
Implement the program taking number as a integer also.
*/
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

	