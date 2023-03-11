#pragma once
#include"stdafx.h"
#include"constants.h"

void FillRand(int arr[], const int n, int minRand, int maxRend);//заполнение массива случайными числами
void FillRand(double arr[], const int n, int minRand, int maxRend);//заполнение массива случайными числами
void FillRand(char arr[], const int n, int minRand, int maxRend);//заполнение массива случайными числами
void FillRand(int arr[ROWS][COLS], const int n, int  minRand = 0, int maxRend = 100);//заполнение массива случайными числами
void FillRand(double arr[ROWS][COLS], const int n, int  minRand = 0, int maxRend = 100);//заполнение массива случайными числами
void FillRand(char arr[ROWS][COLS], const int n, int  minRand = 0, int maxRend = 100);//заполнение массива случайными числами

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);
