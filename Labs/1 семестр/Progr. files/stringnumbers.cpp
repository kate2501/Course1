//Для каждого числа последовательности с чётной суммой цифр получить число, записанное цифрами исходного числа в обратном порядке, и посчитать их количество
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "If you want to stop entering numbers, enter 0";
	int m, n, sum = 0, n1 = 0, kol = -1;
	do
	{
		cout << "\nEnter m" << endl;
		cin >> m;
		n = m;
		while (n)
		{
			sum += n % 10;
			n /= 10;
		}
		if (sum % 2 == 0)
		{
			n = m;
			while (n)
			{
				n1 = n1 * 10 + n % 10;
				n /= 10;
			}
			kol++;
			cout << "\nThe new number:" << n1 << endl;
			n1 = 0;
		}
		else cout << "\nThe new number can't be created";
		sum = 0;
	} while (m);
	cout << "\nThe quantity of such numbers:" << kol << endl;
	system("pause");
}



