#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// Dont show result inner iterations. Only Show the final Sum
int sumofdigi(int n)
{
	int m, o, sum = 0;
	while (n > 0)
	{
		m = n % 10;
		o = n / 10;
		n = o;
		sum = sum + m;
		printf("\nsum=%d", sum);
	}
	return sum;
}
void main()
{
	int n, s;
	printf("\n enter the number");
	scanf("%d", &n);
	s = sumofdigi(n);
	printf("\n sum of digits is %d", s);
}