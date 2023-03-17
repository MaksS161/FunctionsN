#pragma once
#include"Constants.h"

template<typename T>
void Search(T arr[], const int n)
{
	T buffer = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] == arr[i])
			{
				buffer += i;
			}
		}
	}
	cout << buffer;
}
