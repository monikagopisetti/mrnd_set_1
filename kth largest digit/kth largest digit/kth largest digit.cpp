#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int n, q, rm, i = 0, j, nod, l, digits[10], tmp;
	printf("\n enter the no of digits");
	scanf("%d", &nod);
	printf("\n enter the number");
	scanf("%d", &n);
	printf("\n enter the which largest digit u want");
	scanf("%d", &l);
	while (n > 0)
	{
		q = n / 10;
		rm = n % 10;
		if (i < nod)
		{
			digits[i] = rm;
		}
		i++;
		n = q;
	}
	for (i = 0; i < nod; i++)
	{
		for (j = i + 1; j < nod; j++)
		{
			if (digits[i]<digits[j])
			{
				tmp = digits[i];
				digits[i] = digits[j];
				digits[j] = tmp;
			}
		}
	}
	for (i = 0; i <= nod; i++)
	{
		if (l == i)
		{
			printf("\n kth largest digit is %d", digits[l - 1]);
		}
	}
}