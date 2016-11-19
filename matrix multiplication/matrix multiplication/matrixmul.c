#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
# define CASES 4
typedef struct cell{
	int a;
}cell;
typedef struct row{
	cell x;
	cell y;
	cell z;
}row;
typedef struct mat{
	row r;
	row s;
	row t;
}mat;
typedef struct matrices{
	mat l;
	mat m;
	mat c;
}matrices;
typedef struct outputmat{
	mat n;
}omat;
int iscompare(int actual[3][3],omat exp)
{
	int i,j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (actual[i][j] != exp.n[i][j])
				return 0;
			else
				return 1;
		}
	}
}
void testcases()
{
	matrices m1 = { { { 1, 2, 3 }, { 2, 3, 1 }, { 5, 4, 2 } }, { { 2, 3, 1 }, { 1, 4, 2 }, { 1, 5, 3 } }, { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } } };
	matrices m2 = { { { 2, 3, 1 }, { 1, 2, 1 }, { 1, 4, 6 } }, { { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 } }, { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } } };
	matrices input[CASES] = { m1, m2 };
	omat m3 = { { { 7, 26, 14 }, { 8, 23, 11 }, { 16, 41, 19 } } };
	omat m4 = { { { 2, 3, 1 }, { 1, 2, 1 }, { 1, 4, 6 } } };
	omat output[CASES] = { m3, m4 };
	int** matrix = (int**)malloc(CASES*sizeof(int*));
	int i;
	for (i = 0; i < CASES; i++)
	{
		matrix = matmul(input[i]);
		if (iscompare(matrix, output[i]))
			return 1;
		else
			return 0;
	}
}
void main()
{
	testcases();
}
int** matmul(matrices v)
{
	int i, j, k;
	
	/*if (n1 != m2)
	{
		printf("matrix addition is not possible\n\n");
		return; // Didnt add the return statement
		//Program should terminate
	}*/
	for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				 for (K = 0; k < 3; k++)
				{
					c[i][j] = c[i][j] + a[i][k] * b[k][j];
				}
			}
		}
	}
	
}