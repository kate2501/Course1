#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, x, y, n, r;
	cout << "Введите а" << endl;
	cin >> a;
	cout << "\nВведите r" << endl;
	cin >> r;
	cout << "\nВведите n" << endl;
	cin >> n;
	while (n)
	{
		cout << "\nВведите x, y" << endl;
		cin >> x >> y;
		if (fabs(x) <=fabs(a) && fabs(y) <=fabs(a) && x*x + y * y >= r * r)
			cout << "\nПринадлежит" << endl;
		else
		{
			if (fabs(x) > fabs(a) || fabs(y) > fabs(a))
			{
				while (fabs(x) > fabs(a) || fabs(y) > fabs(a))
				{
					if (fabs(x) > fabs(a)) x--;
					if (fabs(y) > fabs(a)) y--;
				}
			}
			if (x*x + y * y < r * r)
			{
				while (x*x + y * y < r * r)
				{
					if (fabs(x) < r) x++;
					if (fabs(y) < r) y++;
				}
			}
			cout << "\nНовые координаты" << x << "," << y << endl;
		}
		n--;
	}
}

