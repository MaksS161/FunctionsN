#pragma once
#include"stdafx.h"
#include"Constants.h"


template<typename T>
void UniqueRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		T unique;
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
