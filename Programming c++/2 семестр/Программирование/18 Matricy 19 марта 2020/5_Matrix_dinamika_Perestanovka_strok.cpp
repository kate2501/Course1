// Пример 5. Динамические матрицы.  Указатель на указатель.
// Перестановка строк матрицы.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int n, m;
  int ** p;
  cout<<"Vvedi n, m:"; cin>>n>>m;
   srand(n + m);
  p = new int* [n];                		// выдел.динам.памяти под массив указателей на строки
  for(int i = 0; i < n; i++){
    p[i] = new int[m];                  	 // выдел.динам.памяти под i-ую строку
     for(int j = 0; j < m; j++)               	  // заполнение i-ой строки
       *(p[i]+j) = rand() % 25 - 9;
// *(*(p+i)+j) = rand() % 25 - 9;
//  p[i][j] = rand() % 25 - 9;
  }

  cout<<"Matrix isxodnaya:  "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++)
       cout<<setw(4)<<p[i][j];
    cout<<endl;
  }
  cout<<endl;

  // перестановка 0 и 1-ой строк
  int* x = p[0];  p[0] = p[1];  p[1] = x;

  cout<<endl<<"Matrix posle perestanovki== "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++)
      cout<<setw(4)<<p[i][j];
    cout<<endl;
  }

  // освобождение динамической памяти,занимаемой динам.матрицей
   for(int i = 0; i < n; i++)
     delete [] p[i];          	 // освоб.памяти, занимаемой i-ой строкой
   delete [] p;                   	 // освоб.памяти, занимаемой массивом указателей
 }

