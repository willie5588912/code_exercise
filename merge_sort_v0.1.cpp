// Consolearrpplication1.cpp : 定義主控台應用程式的進入點。
//


#include "stdafx.h"
#include <iostream>

void swap(int &a, int &b);


int main()
{
	int arr[9] = { 4, 3, 5, 1, 2, 8, 7, 9, 3 };
	int n = sizeof(arr) / sizeof(int);
	int i = 0;

	/*sorting*/
	while (i < n)
	{
		if (i + 1 < n)
		{
			if (arr[i] > arr[i + 1])
				swap(arr[i], arr[i + 1]);
		}
		i += 2;
	}

	/*result*/
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

}


void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}