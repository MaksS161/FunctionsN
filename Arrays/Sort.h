#pragma once
#include"Constants.h"

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
						T buffer = arr[m][n];
						arr[m][n] = arr[i][j];
						arr[i][j] = buffer;
					}
				}
			}
		}
	}
}
