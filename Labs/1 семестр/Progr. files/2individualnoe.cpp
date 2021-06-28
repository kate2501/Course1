//Если число последовательности является простым, то найти максимальную и минимальную цифры и поменять их местами
#include "pch.h"
#include <iostream>
using namespace std;

void change(int, int&, int&);
bool check(int);
void Input();
int main() {
	Input();
	system("pause");
}
bool check(int n)//Проверка на простоту
{
	int s = 0;//сумма делителей
	for (int i = 1; i < (int)sqrt(n); i++)
	{
		if (n%i == 0) s++;
		if (s > 1) break;
	}
	if (s > 1) return false;
	else return true;
}
void change(int n, int&max, int&min)//Поменять числа местами
{
	int temp, nmax, nmin; //temp-рабочая; nmax, nmin- индексы максимальной и минимальной цифры
	int q = 0;                              //q = 0-счётчик индексов, значение степени 10 
	double m = (double)n;
	while (n)
	{

		temp = n % 10;
		if (temp >= max)
		{
			max = temp;
			nmax = q;
		}
		if (temp <= min)
		{
			min = temp;
			nmin = q;
		}
		n = n / 10;
		q++;
	}
	m = m + (min - max)*(pow(10, nmax)) + (max - min)*(pow(10, nmin));//новое число
	cout << "New number:" << m << endl;
}
void Input() //Ввод чисел
{
	int min, max;
	bool flag;
	int n;
	do
	{
		min = 9; max = 1;
		cout << "Vvedite vvod. Konec-0" << endl;
		cin >> n;
		if (n > 0) //для работы фунцкий n должно быть>0
		{
			flag = check(n);
			if (flag == true)
			{
				change(n, max, min);
				cout << "min:" << min << " max:" << max << endl;
			}
			else cout << "Ne prostoe" << endl;
		}
		if (n < 0) cout << "Otricatelnoe" << endl;//отрицательное- автоматически не является простым
	} while (n);
}
