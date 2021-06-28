// Пример 1.Статическая матрица. Массив указателей на строки.
// Перестановка 1 и 2 строк.
#include<iostream>
using namespace std;
const int Dim = 20;
int main(){
 int a[D][DIM];
 int n, m;
  system("cls");
  cout << "Vvedi n m:";  cin >> n>>m;
  srand(n + m);
  int * p[Dim];     int * x;
   for(int i = 0; i < n; i++)
    p[i] = a[i];
//  p[i] = &a[i][0];
//  p[i] = (int*)&a[i];

 cout << "\n\tVvedi matrix\n";
 for(int i = 0; i < n; i++)
   for(int j = 0; j < m; j++)
        p[i][j] = rand() % 15 - 9;
//    *(p[i]+j) = rand() % 15 - 9;
//   a[i][j] = rand() % 15 - 9;
//  *(a[i]+j) = rand() % 15 - 9;

  cout<<"Matrix isxodnaya=="<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout.width(5);
      cout<<p[i][j];
    }
    cout<<endl;
  }
 
  x = p[0];   p[0] = p[1];    p[1] = x;		// перестановка 1 и 2 строк
  
 /*  x = a[0];
   a[0] = a[1];           // ошибка!!!! Имя одном. массива - Const указатель.
   a[1] = x;
*/

  cout<<endl<<"Matrix posle perestanovki== "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout.width(5);
      cout<<*(p[i] + j);
    }
    cout<<endl;
  }
  cout<<endl<<"Matrix isxodnaya== "<<endl;
    for(int i = 0; i < n; i++){
     for(int j = 0; j <m; j++){
      cout.width(5);
      cout<<a[i][j];
    }
    cout<<endl;
  }
 }

