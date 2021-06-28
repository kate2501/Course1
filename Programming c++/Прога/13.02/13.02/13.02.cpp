#include "pch.h"
#include <iostream>
using namespace std;

const int DIM = 20;
int fun(int * num, int size);
int main()
{
	int x[DIM], n;
	cout << "Vvedi n: ";	cin >> n;			// введём 5
	cout << "Vvedi massiv: " << endl;
	for (int i = 0; i < n; i++)
		cin >> x[i]; 		// введём 1 2 3 4 5
	for (int i = 0; i < n; i++)
		cout << x[i] << ' ';		// 1 2 3 4 5
	cout << endl;
	cout << fun(x, n) << endl;				// 15
}
int fun(int * a, int size)
{
	int s = 0;
	for (int i = 0; i < size; i++)
		s = s + a[i];
	return s;
}