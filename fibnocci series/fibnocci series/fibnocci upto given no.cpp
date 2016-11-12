#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fibnocci(int n)
{
	int f1, f2,sum,i;
	f1= 0;
	f2 = 1;
	if (n >= 0)
	{
		printf("\n 0");
    }
    if (n >= 1)
	{
		printf("\n 1");
	}
	if (n>=2)
	{
		for (i=2;i<n;i++)
		{
			sum = f1 + f2;
			printf("\n %d", sum);
			f1 = f2;
			f2 = sum;
		}
	}
	return 0;
}
void main()
{
	int n,s;
	printf("\n enter the no upto where fibnocci series should be printed");
	scanf("%d", &n);
	s = fibnocci(n);
}