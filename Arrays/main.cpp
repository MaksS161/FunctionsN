//Arrays
#include <iostream>
using namespace std;
const int ROWS;
const int COLS;

void FillRand(int arr[], const int n, int minRand, int maxRend);//заполнение массива случайными числами
void FillRand(double arr[], const int n, int minRand, int maxRend);//заполнение массива случайными числами
void FillRand(char arr[], const int n, int minRand, int maxRend);//заполнение массива случайными числами
void FillRand(int arr[ROWS] [COLS], const int n, int  inRand, int maxRend);//заполнение массива случайными числами


void Print(int arr[], const int n);//вывод массива на экран
void Print(double arr[], const int n);//вывод массива на экран
void Print(char arr[], const int n);//вывод массива на экран

int Sum(int arr[], const int n);//вывод на экран суммы массива
double Sum(double arr[], const int n);//вывод на экран суммы массива
double Sum(char arr[], const int n);//вывод на экран суммы массива

double Avg (int arr[], const int n);//вывод на экран средне-арифмитическое 
double Avg (double arr[], const int n);//вывод на экран средне-арифмитическое 
char Avg (char arr[], const int n);//вывод на экран средне-арифмитическое 

int minValueIn(int arr[], const int n);//вывод минимального значения массива
double minValueIn(double arr[], const int n);//вывод минимального значения массива
char minValueIn(char arr[], const int n);//вывод минимального значения массива

int maxValueIn(int arr[], const int n);//вывод минимального значения массива
double maxValueIn(double arr[], const int n);//вывод минимального значения массива
char maxValueIn(char arr[], const int n);//вывод минимального значения массива

void Sort(int arr[], const int n);//сортировка массива 
void Sort(double arr[], const int n);//сортировка массива 
void Sort(char arr[], const int n);//сортировка массива 

void shiftLeft(int arr[], const int n);//Сдвиг влево
void shiftLeft(double arr[], const int n);//Сдвиг влево
void shiftLeft(char arr[], const int n);//Сдвиг влево

void shiftRight(int arr[], const int n);//Сдвиг вправо
void shiftRight(double arr[], const int n);//Сдвиг вправо
void shiftRight(char arr[], const int n);//Сдвиг вправо

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);

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
	//shiftLeft(arr, n);
	//shiftRight(arr, n);
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
	cout << "Сумма элементов массива = "<<Sum(arr, n) << endl;
	cout << "Средне-арифметическое массива = " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение массива = " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение массива = " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	

	cout << endl;
}

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
		arr[i] = rand()%(maxRend-minRand)+minRand;
		arr[i] /= 100;
	}
} 
void FillRand(char arr[], int n, int minRand, int maxRend)
{
	minRand *= 100;
	maxRend *= 100;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRend-minRand)+minRand;
		arr[i] /= 100;
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
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
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
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr [i];
	}
	return sum;
}
double Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr [i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double) Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
char Avg(char arr[], const int n)
{
	return Sum(arr, n) / n;
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
double minValueIn(double arr[], const int n)			
{
	double min = arr[0];									
	for (int i=0; i<n; i++)			
	{			
		if (min >arr[i])			
			min = arr[i];
	}		
	return min;
}
char minValueIn(char arr[], const int n)			
{
	char min = arr[0];									
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
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
char maxValueIn(char arr[], const int n)
{
	double max = arr[0];
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
	Print(arr, n);
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
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique; 
		do
		{
		arr[i] = rand() % n;
		unique = true;
			for (int j = 0; j < i; j++)
				{
					if (arr[i] == arr[j])
					{
						unique = false;
						break;
					}
				} 
		} while (!unique);
	}
}
void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

	}

}