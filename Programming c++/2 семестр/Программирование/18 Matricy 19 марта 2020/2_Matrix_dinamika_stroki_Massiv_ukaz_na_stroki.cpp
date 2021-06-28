// Пример 2. Частично динамическая матрица.  Количество строк - const.
// Используем массив указателей.
// Для каждой строки  выделяется динамическая память.
// Можно для каждой строки вводить разное количество элементов.
#include<iostream>
using namespace std;

const int Dim = 20;
int main(){
  int  n, m;
  system("cls");
  cout << "Vvedi n, m: ";  cin >> n>>m;
  srand(n + m);
  int * p[Dim], *x;  
   srand(n + m);
  // Выделение динамической памяти под строки матрицы
  for(int i = 0; i < n; i++){
    p[i] = new int[m];                 	  // выделение памяти под i-ую строку матрицы 
    for(int j = 0; j < m; j++)              // заполнение i-ой строки матрицы
      p[i][j] = rand() % 25 - 9;
 }
   cout<<"Matrix isxodnaya:  "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout.width(5);
      cout<<*(p[i]+j);                	   // cout<<p[i][j];
    }
    cout<<endl;
  }
 
  // перестановка 0 и 1-ой строк матрицы 
  x = p[0];  p[0] = p[1];  p[1] = x;

  cout<<endl<<" Matrix posle perestanovki "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout.width(5);
      cout<<*(p[i]+j);                   // cout<<p[i][j];
    }
    cout<<endl;
  }

  // Освобождение динамической памяти,занимаемой матрицей X
  for(int i = 0; i < n; i++)
     delete [] p[i];                     // освоб.памяти, занимаемой i-ой строкой матрицы X
   
 }


