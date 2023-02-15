//Arrays
#include <iostream>
using namespace std;

void FillRand(int arr[], const int n);//заполнение массива случайными числами
void Print(int arr[], const int n);//вывод массива на экран
void Sort(int arr[], const int n);//сортировка массива 
void Sum(int arr[], const int n);//вывод на экран суммы массива

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	Sum(arr, n);


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
void Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
			sum += arr [i];
	}
	cout << "сумма масиива = " << sum << endl;
}






