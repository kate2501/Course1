#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 1, m, sum = 1;
	while (n)
	{
		cout << "Vvedite n" << endl;
		cin >> n;
		m = n;
		if (n == 1)
		{
			cout << "1,1" << endl;
		}
		else
		{
			cout << 1 << endl;
			while (m != 1)
			{
				for (int i = 2; i <= m; i++)
				{
					if (m % i == 0)
					{
						sum += i;
						m /= i;
						cout << i << endl;
						break;
					}
				}

			}
			cout << n << "," << sum << endl;
		}
		sum = 1;
	}
}

