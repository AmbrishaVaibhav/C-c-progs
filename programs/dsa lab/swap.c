#include <stdio.h>
#include <stdlib.h>

void InpMat(int** mat, int rows, int cols)
{
	printf("Please enter elements matrix:\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			scanf("%i", &mat[i][j]);
	}
}

void OutMat(int** mat, int rows, int cols)
{
	printf("===============================================================\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			printf("%3d", mat[i][j]);
		printf("\n");
	}
}

void ChangeMat(int** mat, int rows, int cols)
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
	scanf("%i%i", &rows, &cols);
	int** mat = (int**)malloc(sizeof(int*) * (size_t)rows);
	for (int i = 0; i < rows; i++)
		mat[i] = (int*)malloc(sizeof(int) * (size_t)cols);
	InpMat(mat, rows, cols);
	ChangeMat(mat, rows, cols);
	OutMat(mat, rows, cols);
	free(mat);
	return 0;
}