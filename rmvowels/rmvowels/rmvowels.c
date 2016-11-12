#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
// Well Done.. :)
void main()
{
	char str[10];
	int  i,j;
	printf("\n enter the string");
	scanf("%s", str);
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
	
	printf("\n new string is %s", str);

}