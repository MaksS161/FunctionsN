//Arrays
#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Sort.h"
#include"Shift.h"
#include"UniqueRand.h"
#include"Search.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 8;
	double arr[n];
	int minRand, maxRend;
	FillRand(arr, n, minRand=0, maxRend=10);
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
	//Search(arr, n);
	cout << endl;

	const int SIZE = 10;
	int brr[SIZE];
	//int minRand, maxRend;
	cout << "Введите минимальное и максимальное случайное число: "; cin >> minRand >> maxRend;
	if (minRand >= maxRend)
	{
		int buffer = minRand;
		minRand = maxRend;
		maxRend = buffer;
	}
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
	cout << "Введите на сколько элeментов сдвинуть влево : "; 
	shiftLeft(i_arr_2, ROWS,COLS);
	cout << "Введите на сколько элeментов сдвинуть вправо : "; 
	shiftRight(i_arr_2, ROWS,COLS);
	cout << endl;

	double i_brr_2[ROWS][COLS];//Массив Double
	FillRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	cout << "Сумма элементов массива = " << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое массива = "<<Avg (i_brr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива = " << minValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива = " << maxValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << endl;
	Sort(i_brr_2, ROWS, COLS); cout << endl;
	Print(i_brr_2, ROWS, COLS); cout << endl;
	cout << "Введите на сколько элeментов сдвинуть влево : "; 
	shiftLeft(i_brr_2, ROWS,COLS);cout << endl;
	cout << "Введите на сколько элeментов сдвинуть вправо : ";
	shiftRight(i_brr_2, ROWS, COLS);
	cout << endl;
}
