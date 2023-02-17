//Arrays
#include <iostream>
using namespace std;

void FillRand(int arr[], const int n);//заполнение массива случайными числами
void Print(int arr[], const int n);//вывод массива на экран
void Sum(int arr[], const int n);//вывод на экран суммы массива
void Avg (int arr[], const int n);//вывод на экран средне-арифмитическое  
void minValueIn(int arr[], const int n);//вывод минимального значения массива
void maxValueIn(int arr[], const int n);//вывод минимального значения массива
void Sort(int arr[], const int n);//сортировка массива 
void shiftLeft(int arr[], const int n);//Сдвиг влево
void shiftRight(int arr[], const int n);//Сдвиг вправо


void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	cout << endl;
	Sort(arr, n);
	Print(arr, n);
	shiftLeft(arr, n);
	shiftRight(arr, n);


}

void FillRand(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
} 

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Sum(int arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
			sum += arr [i];
	}
	cout << "Сумма массива = " << sum << endl;
}

void Avg(int arr[], const int n)
{
	double sum=0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Средне-арифметическое массива = " << sum/n << endl;
}

void minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i=0; i<n; i++)
	{
		if (min >arr[i])
			min = arr[i];
	}		
cout << "Минимальное значение массива = " << min << endl;
}

void maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	cout << "Максимальное значение массива = " << max << endl;
}

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

void shiftLeft(int arr[], const int n)
{
	int left;
	cout << "Введите на сколько эллeментов сдвинуть влево : "; cin >> left;
	for (int i = 0; i < left-1; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void shiftRight(int arr[], const int n)
{
	int right;
	cout << "Введите на сколько эллeментов сдвинуть вправо : "; cin >> right;
	for (int i = n - right; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int j = 0; j < n - right; j++)
	{
		cout << arr[j] << "\t";
	}
	cout << endl;
}

