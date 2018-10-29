#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

void SelectionSort(int a[], int length);



int main()
{
	int length;
	
	cout << "Enter a length for your array:			\n\n ";
	cin >> length;

	int *dPtr = new int[length];


	cout << "Now enter the values into the array: ";
	for (int i=0; i < length; i++)
	{
		cin >> dPtr[i];
	
	}

	cout << "The unsorted array is:  ";
	for (int i = 0; i < length; i++)
	{
		cout << dPtr[i]<<"      ";

	}
	cout << "\n\n";

	SelectionSort(dPtr, length);

}


void SelectionSort(int a[], int length)
{
	int maxIndex = 0;
	for (int i = 0; i < length - 2; i++)
	{
		maxIndex = i;
		for (int j = i + 1; j < length - 1; i++)
		{
			if (a[j]> a[maxIndex])
			{
				maxIndex = j;
			}
			int temp = a[i];
			a[i] = a[maxIndex];
			a[maxIndex] = temp;

		}
	}
	cout << "The sorted array is: ";
	for (int i = 0; i < length; i++)
	{
		cout << a[i];

	}

}