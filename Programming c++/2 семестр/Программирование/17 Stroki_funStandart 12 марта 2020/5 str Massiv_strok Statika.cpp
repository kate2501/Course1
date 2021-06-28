//Пример 5. Ввод строки и массива строк.
#include <iostream>
using namespace std;
const int Nmax = 20, Mmax = 30;
int main() {
    int n, m;
    char  str1[Nmax], str2[Nmax][Mmax];
    cout << " Vvedi   dlinu stroki < Mmax-1: ";
    cin >> m;
    //Ввод строки 
    cin.ignore();
    cout << "Vvedi stroku dlinoi do Mmax-1 simvolov\n";
    gets_s(str1);
    cout << "Stroka==" << endl << str1 << endl;

    //Ввод массива строк
    cout << "Vvedi  n -- kol strok  do Nmax"<<endl;
    cin >> n;
    cin.ignore();
    cout << "Vvedi  "<<n<< "  stroki dlinoi do Mmax-1 simvolov\n";
    for (int i = 0; i < n; i++)
        gets_s(str2[i]);

    //Вывод массива строк
    cout << "Massiv strok==\n";
    for (int i = 0; i < n; i++)
        cout << str2[i] << endl;
}

