//Arrays
#include <iostream>
using namespace std;

void FillRand(int arr[], const int n);//заполнение массива случайными числами
void Print(int arr[], const int n);//вывод массива на экран
int Sum(int arr[], const int n);//вывод на экран суммы массива
double Avg (int arr[], const int n);//вывод на экран средне-арифмитическое  
int minValueIn(int arr[], const int n);//вывод минимального значения массива
int maxValueIn(int arr[], const int n);//вывод минимального значения массива
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
	cout << "Сумма элементов массива = "<<Sum(arr, n) << endl;
	cout << "Средне-арифметическое массива = " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива = " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение массива = " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	shiftLeft(arr, n);
	shiftRight(arr, n);
}

void FillRand(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
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

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr [i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	double sum=0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return (double) sum / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i=0; i<n; i++)
	{
		if (min >arr[i])
			min = arr[i];
	}		
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
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
	cout << "Введите на сколько элeментов сдвинуть влево : "; cin >> left;
	for (int i = 0; i < left; i++)
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
	cout << "Введите на сколько элeментов сдвинуть вправо : "; cin >> right;
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

