#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<malloc.h>
#define CASES 4
#define MAX 2
#define RANGE 20
// Write test cases
char* equilateral = "equilateral";
char* isoceles = "isoceles";
char* scalen = "scalen";
typedef struct coordinates
{
	double x;
	double y;
}Coordinates;
typedef struct triangle
{
	Coordinates a;
	Coordinates b;
	Coordinates c;
}Triangle;
typedef struct string
{
	char str[30];
}String;
int iscompare(char* actual, string expected)
{
	int i, flag = 1;
	for (i = 0; actual[i] != '\0'; i++)
	{
		if (actual[i] != expected.str[i])
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
double power(double x, int y)
{
	double result = 1;
	for (int i = 0; i < y; i++)
		result *= x;
	return result;
}
char* typeOfTriangle(Triangle t)
{
	double d1, d2, d3;
	d1 = roundf(sqrt(pow((t.a.x - t.b.x), 2) + pow((t.a.y - t.b.y), 2))*100)/100;
	d2 = roundf(sqrt(pow((t.b.x - t.c.x), 2) + pow((t.b.y - t.c.y), 2)) * 100) / 100;
	d3 = roundf(sqrt(pow((t.c.x - t.a.x), 2) + pow((t.c.y - t.a.y), 2)) * 100) / 100;
	if ((d1 == d2) && (d2 == d3))
	{
		return equilateral;
	}
	else if ((d1 == d2) || (d2 == d3) || (d3 == d1))
	{
		return isoceles;
	}
	else
	{
		return scalen;
	}
}
void testcases()
{
	Triangle t1 = { { 1, 0 }, { 0, 1 }, { 0, 0 } };
	Triangle t2 = { { 1, 2 }, { 2, 3 }, { 3, 4 } };
	triangle t3 = { { 1, 0 }, { -1, 0 }, { 0, 1.732050807569 } };
	Triangle input[3] = { t1, t2,t3 };
	string output[3] = { { "isoceles" }, { "isoceles" }, { "equilateral" } };
	char* res = (char*)malloc(RANGE*sizeof(char));
	for (int i = 0; i < 3; i++)
	{
		res = typeOfTriangle(input[i]);
		if (iscompare(res, output[i]))
			printf("Passed\n");
		else
			printf("Failed\n");
	}
}
void main()
{
	testcases();
}

