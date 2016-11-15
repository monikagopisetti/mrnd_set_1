#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#define MAX 20
#define CASES 4
/*
Give proper file names
fibnocci upto given no -- is not proper naming convention
dont use spaces and try to give file in one word .. or use general terms like prog.cpp etc
*/

/*
When giving zero as number of terms . the output is displaying 
and number of terms printed are less than the given value
*/
int* fibnocci(int n)
{
	int f1, f2,sum,i;
	f1= 0;
	f2 = 1;
	if (n <= 0)
		return NULL;
	int* result = (int*)malloc(n*sizeof(int));
	int index = 0;
	if (n > 0) 
	{
		result[index++] = 0;
    }
    if (n >= 1)
	{
		result[index++] = 1;
	}
	for (i=2;i<n;i++)
	{
		sum = f1 + f2;
		result[index++] = sum;
		f1 = f2;
		f2 = sum;
	}
	return result;
}
int isCompare(int* actual, int * expected, int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (actual[i] != expected[i])
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
void testcases()
{
	int input[CASES] = { 1, 2 ,5 , 7};
	int output[CASES][MAX] = { { 0 }, { 0, 1 }, { 0, 1, 1, 2, 3, 5 }, { 0, 1, 1, 2, 3, 5 ,8,13} };
	for (int i = 0; i < CASES; i++)
	{
		int* result = fibnocci(input[i]);
		if (isCompare(result, output[i],input[i]))
			printf("Passed\n");
		else
			printf("Failed\n");
	}
}
void main()
{
	testcases();
}