#include"FillRand.h"

void FillRand(int arr[], int n, int minRand, int maxRend)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRend - minRand) + minRand;
	}
}
void FillRand(double arr[], int n, int minRand, int maxRend)
{
	minRand *= 100;
	maxRend *= 100;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRend - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], int n, int minRand, int maxRend)
{
	minRand *= 100;
	maxRend *= 100;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRend - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int n, int  minRand, int maxRend)//заполнение массива случайными числами
{

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRend - minRand) + minRand;
		}
	}
}
void FillRand(double brr[ROWS][COLS], const int n, int  minRand, int maxRend)//заполнение массива случайными числами
{
	minRand *= 100;
	maxRend *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			brr[i][j] = rand() % (maxRend - minRand) + minRand;
			brr[i][j] /= 100;
		}
	}
}
void FillRand(char crr[ROWS][COLS], const int n, int  minRand, int maxRend)//заполнение массива случайными числами
{
	minRand *= 100;
	maxRend *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			crr[i][j] = rand() % (maxRend - minRand) + minRand;
			crr[i][j] /= 100;
		}
	}
}
