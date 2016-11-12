#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a[10][10], b[10][10],c[10][10];
	int m1, n1, m2, n2,i,j,k;
	printf("enter the no of rows and columns of matrix1\n\n");
	scanf("%d %d", &m1, &n1);
	printf("enter the elements of matrix 1\n\n");
	for  (i = 0; i < m1; i++)
	{
		for (j = 0; j < n1; j++)
		{
			scanf("%d", &a[i][j]);
		}

	}
	printf("enter the rows and columns of matrix2\n\n");
	scanf("%d %d", &m2, &n2);
	printf("enter the elements of matrix2\n\n");
	for (i = 0; i < m2; i++)
	{
		for (j = 0; j < n2; j++)
		{
			scanf("%d", &b[i][j]); 
		}
	}
	if (n1 != m2)
	{
		printf("matrix addition is not possible\n\n");
		return; // Didnt add the return statement
		//Program should terminate
	}
	else
	{
		for (i = 0; i < m1; i++)
		{
			for (j = 0; j < n2; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < n1; k++)
				{
					c[i][j] = c[i][j] + a[i][k] * b[k][j];
				}
			}
		}
	}
	printf("the resultant matrix is:\n\n");
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			printf("%d\n\n", c[i][j]);
		}
	}
	
}