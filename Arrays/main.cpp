//Arrays
#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Sort.h"


void shiftLeft(int arr[], const int n);//Сдвиг влево
void shiftLeft(double arr[], const int n);//Сдвиг влево
void shiftLeft(char arr[], const int n);//Сдвиг влево
void shiftLeft (int arr[ROWS][COLS], const int ROWS, const int COLS);//Сдвиг влево

void shiftRight(int arr[], const int n);//Сдвиг вправо
void shiftRight(double arr[], const int n);//Сдвиг вправо
void shiftRight(char arr[], const int n);//Сдвиг вправо


void Search(int arr[], const int n);
void Search(double arr[], const int n);
void Search(char arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 8;
	double arr[n];
	int minRand, maxRend;
	FillRand(arr, n, minRand=0, maxRend=20);
	//UniqueRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива = " << Sum(arr, n) << endl;
	cout << "Средне-арифметическое массива = " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива = " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение массива = " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	shiftLeft(arr, n);
	shiftRight(arr, n);
	cout << endl;

	const int SIZE = 10;
	int brr[SIZE];
	//int minRand, maxRend;
	//cout << "Введите минимальное и максимальное случайное число: "; cin >> minRand >> maxRend;
	//if (minRand >= maxRend)
	//{
	//	int buffer = minRand;
	//	minRand = maxRend;
	//	maxRend = buffer;
	//}
	FillRand(brr, SIZE, minRand, maxRend);
	Print(brr, SIZE);
	cout << "Сумма элементов массива = "<<Sum(brr, SIZE) << endl;
	cout << "Средне-арифметическое массива = " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение массива = " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение массива = " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	shiftLeft(brr, SIZE);
	shiftRight(brr, SIZE);
	cout << endl;

	int i_arr_2[ROWS][COLS];// Массив Int
	FillRand (i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива = "<<Sum (i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое массива = "<<Avg (i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива = " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива = " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	shiftLeft(i_arr_2, ROWS,COLS);
	cout << endl;

	double i_brr_2[ROWS][COLS];//Массив Double
	FillRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	cout << "Сумма элементов массива = " << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое массива = "<<Avg (i_brr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива = " << minValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива = " << maxValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << endl;
	Sort(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	cout << endl;
	
	//char i_crr_2[ROWS][COLS];
	//FillRand(i_crr_2, ROWS, COLS);
	//Print(i_crr_2, ROWS, COLS);

}



void shiftLeft(double arr[], const int n)
{
	int left;
	cout << "Введите на сколько элeментов сдвинуть влево : "; cin >> left;
	for (int i = 0; i < left; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);
}
void shiftLeft(char arr[], const int n)
{
	int left;
	cout << "Введите на сколько элeментов сдвинуть влево : "; cin >> left;
	for (int i = 0; i < left; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int left;
	cout << "Введите на сколько элeментов сдвинуть влево : "; cin >> left;
	for (int i = 0; i < left; i++)
	{
		int buffer = arr[0][0];
		for (int j = 0; j < COLS; j++)
		{
			for (int m = 0; m < ROWS; m++)
			{
				arr[j][m] = arr[j + 1][m + 1];
				arr[j][m] = buffer;
			}
		}
	}
	Print(arr, ROWS,COLS);
}


void shiftRight(int arr[], const int n)
{
	int right;
	cout << "Введите на сколько элeментов сдвинуть вправо : "; cin >> right;

	for (int i = 0; i < right; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}
void shiftRight(double arr[], const int n)
{
	int right;
	cout << "Введите на сколько элeментов сдвинуть вправо : "; cin >> right;

	for (int i = 0; i < right; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}
void shiftRight(char arr[], const int n)
{
	int right;
	cout << "Введите на сколько элeментов сдвинуть вправо : "; cin >> right;

	for (int i = 0; i < right; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}

void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

	}

}