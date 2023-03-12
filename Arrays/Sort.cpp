#include"Sort.h"

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int m = 0; m < ROWS; m++)
			{
				for (int n = 0; n < COLS; n++)
				{
					if (arr[m][n] > arr[i][j])
					{
						int buffer = arr[m][n];
						arr[m][n] = arr[i][j];
						arr[i][j] = buffer;
					}
				}
			}
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int m = 0; m < ROWS; m++)
			{
				for (int n = 0; n < COLS; n++)
				{
					if (arr[m][n] > arr[i][j])
					{
						double buffer = arr[m][n];
						arr[m][n] = arr[i][j];
						arr[i][j] = buffer;
					}
				}
			}
		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int m = 0; m < ROWS; m++)
			{
				for (int n = 0; n < COLS; n++)
				{
					if (arr[m][n] > arr[i][j])
					{
						char buffer = arr[m][n];
						arr[m][n] = arr[i][j];
						arr[i][j] = buffer;
					}
				}
			}
		}
	}
}
