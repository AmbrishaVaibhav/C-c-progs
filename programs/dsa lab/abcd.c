#include <stdio.h>
#include <stdlib.h>

void Mat(int** mat, int rows, int cols)
{
	printf("enter elements matrix:\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			scanf("%d ", &mat[i][j]);
	}
}

void dis(int** mat, int rows, int cols)
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			printf("%d", mat[i][j]);
		printf("\n");
	}
}
void Change(int** mat, int rows, int cols)
{
	int l = 0;
	int r = cols-1;
	while (l < r)
	{
		for (int i = 0; i < rows; i++)
		{
			int temp = mat[i][l];
			mat[i][l] = mat[i][r];
			mat[i][r] = temp;
		}
		l++;
		r--;
	}
}
int main()
{
	int rows, cols;
	printf("Please enter rows and columns of matrix:\n");
	scanf("%d%d", &rows, &cols);
	int** mat = (int**)malloc(sizeof(int*) * (size_t)rows);
	for (int i = 0; i < rows; i++)
		mat[i] = (int*)malloc(sizeof(int) * (size_t)cols);
	Mat(mat, rows, cols);
	Change(mat, rows, cols);
	dis(mat, rows, cols);
	free(mat);
	return 0;
}