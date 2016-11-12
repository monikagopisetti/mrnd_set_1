#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int i, j,k,flag=1,sum=0;
	printf("\n enter the number up to which u want prime");
	scanf("%d", &k);
	printf("\n prime nos upto %d are:", k);
	for (i = 2; i < k; i++)
	{
		for (j = 2; j <= i / 2; j++)
		{
			if (i%j == 0)
			{
				flag = 0;
			}
			else
			{
				flag = 1;
			}
			if (flag == 0)
			{
				break;
			}
			continue;
		}
		if (flag == 1)
		{
			printf("\n %d", i);
			sum = sum + i;
		}
	}
	printf("\n sum of prime no is %d", sum);
}