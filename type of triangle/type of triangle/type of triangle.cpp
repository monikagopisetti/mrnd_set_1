#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void main()
{
	float x1, x2, x3, y1, y2, y3;
	double d1, d2, d3;
	printf("\n enter the first coordinate");
	scanf("%f %f", &x1,&y1);
	printf("\n enter the second coordinate");
	scanf("%f %f", &x2, &y2);
	printf("\n enter the third coordinate");
	scanf("%f %f", &x3, &y3);
	d1 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	d2 = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
	d3 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	if (d1 == d2 == d3)
	{
		printf("\n it is an equilateral triangle");
	}
	else if ((d1==d2)||(d2==d3)||(d3==d1))
	{
		printf("\n it is an isoceless triangle");
	}
	else
	{
		printf("\n it is scalen traingle");
	}
}