#include"Shift.h"
#include"stdafx.h"

template<typename T>
void shiftLeft(T arr[], const int n)
{
	T left;
	cout << "¬ведите на сколько элeментов сдвинуть влево : "; cin >> left;
	for (int i = 0; i < left; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

template<typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T left = 0;
	cin >> left;
	for (int i = 0; i < left; i++)
	{
		T buffer = arr[0][0];
		for (int j = 0; j < ROWS; j++)
		{
			for (int m = 0; m < COLS; m++)
			{
				arr[j][m] = arr[j][m + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
	Print(arr, ROWS, COLS);
}

template<typename T>
void shiftRight(T arr[], const int n)
{
	T right;
	cout << "¬ведите на сколько элeментов сдвинуть вправо : "; cin >> right;

	for (int i = 0; i < right; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}

template<typename T>
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T right = 0;
	cin >> right;
	for (int i = 0; i < right; i++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];
		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int m = COLS - 1; m >= 0; m--)
			{
				arr[j][m] = arr[j][m - 1];
			}
		}
		arr[0][0] = buffer;
	}
}

