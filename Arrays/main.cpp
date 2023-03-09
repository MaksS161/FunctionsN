//Arrays
#include <iostream>
using namespace std;
const int ROWS=8;
const int COLS=5;

void FillRand(int arr[], const int n, int minRand, int maxRend);//заполнение массива случайными числами
void FillRand(double arr[], const int n, int minRand, int maxRend);//заполнение массива случайными числами
void FillRand(char arr[], const int n, int minRand, int maxRend);//заполнение массива случайными числами
void FillRand(int arr[ROWS] [COLS], const int n, int  minRand=0, int maxRend=100);//заполнение массива случайными числами
void FillRand(double arr[ROWS] [COLS], const int n, int  minRand=0, int maxRend=100);//заполнение массива случайными числами


void Print(int arr[], const int n);//вывод массива на экран
void Print(double arr[], const int n);//вывод массива на экран
void Print(char arr[], const int n);//вывод массива на экран
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);//вывод массива на экран
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);//вывод массива на экран

int Sum(int arr[], const int n);//вывод на экран суммы массива
double Sum(double arr[], const int n);//вывод на экран суммы массива
char Sum(char arr[], const int n);//вывод на экран суммы массива
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);//вывод на экран суммы массива

double Avg (int arr[], const int n);//вывод на экран средне-арифмитическое 
double Avg (double arr[], const int n);//вывод на экран средне-арифмитическое 
char Avg (char arr[], const int n);//вывод на экран средне-арифмитическое 
double Avg (int arr[ROWS][COLS], const int ROWS, const int COLS);//вывод на экран средне-арифмитическое 

int minValueIn(int arr[], const int n);//вывод минимального значения массива
double minValueIn(double arr[], const int n);//вывод минимального значения массива
char minValueIn(char arr[], const int n);//вывод минимального значения массива
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);//вывод минимального значения массива

int maxValueIn(int arr[], const int n);//вывод минимального значения массива
double maxValueIn(double arr[], const int n);//вывод минимального значения массива
char maxValueIn(char arr[], const int n);//вывод минимального значения массива
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);//вывод минимального значения массива

void Sort(int arr[], const int n);//сортировка массива 
void Sort(double arr[], const int n);//сортировка массива 
void Sort(char arr[], const int n);//сортировка массива 
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);//сортировка массива 

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
	cout << "Сумма элементов массива = "<<Sum(brr, SIZE) << endl;
	cout << "Средне-арифметическое массива = " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение массива = " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение массива = " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << endl;

	int i_arr_2[ROWS][COLS];
	FillRand (i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива = "<<Sum (i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое массива = "<<Avg (i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива = " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива = " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << endl;

	int i_brr_2[ROWS][COLS];
	FillRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);


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
void FillRand(double arr[ROWS][COLS], const int n, int  minRand, int maxRend)//заполнение массива случайными числами
{
	minRand *= 100;
	maxRend *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRend - minRand) + minRand;
			arr[i][j] /= 100;
		}
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
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
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
char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr [i];
	}
	return sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
		sum += arr[i][j];
		}
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
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS,COLS) / (ROWS*COLS);
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
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j])
				min = arr[i][j];
		}
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
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j])
				max = arr[i][j];
		}
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
//void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//			if (arr[i][j] < arr[i])
//			{
//				int buffer = arr[i];
//				arr[i] = arr[j];
//				arr[j] = buffer;
//			}
//		for (int m = 0; m < COLS; m++)
//		{
//		for (int j = i + 1; j < n; j++)
//		{
//		}
//		}
//	}
//}

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