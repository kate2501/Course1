// Есть ли в числе n последовательность из k одинаковых цифр?
#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int pr, sl, k;
	long n;
	cout << "Enter the natural number: ";     cin >> n;
	cout << "\nEnter k: ";	 cin >> k;
	int fl = 0;
	int kol = 1;
	pr = n % 10; n = n / 10;
	while (n) {
		sl = n % 10;  n = n / 10;
		if (pr == sl) {
			kol++;
			if (kol == k) { cout << "\nYes" << endl; fl = 1; break; }
		}
		else kol = 1;
		pr = sl;
	}

	if (fl == 0) cout << "\nNo" << endl;
	system("pause");
}

