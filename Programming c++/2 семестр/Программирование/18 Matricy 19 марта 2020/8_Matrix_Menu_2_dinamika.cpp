//Пример 8. Память для  a[n][m] выделяется в функции memory().
// Используются функций init(), vivod(), delMemory().
#include <iostream>
using namespace std;

int** memory(int n, int m);
void delMemory(int** x, int n, int m);
void init(int** x, int n, int m);
void vivod(int** x, int n, int m);
int main(){
   int m, n;
   int ** a = 0;
   while(1){
   cout<<"Vvedite nomer punkta:\n\n";
   cout<<"1: memory()      \n";
   cout<<"2: init()              \n";
   cout<<"3: vivod()          \n";
   cout<<"4: delMemory() \n";
   cout<<"5: exit()             \n";
   cout<<endl<<"You change:";
   int vibor;
   cin>>vibor;
   switch(vibor){
    case  1:  system("cls");
        	cout<<"Vvedi  chislo strok:";        	     cin>>n;
       		cout<<"Vvedi  chislo elementov v stroke:";   cin>>m;
      	  	a = memory(n, m);    break;
    case  2:  init(a, n, m);	     break;
    case  3:  cout<<"Matrix isxodnaya: "<<endl;
       	      vivod(a, n, m);	      break;
    case  4:  delMemory(a, n, m);     break;
    case  5:  cout<<"Good-Bye!"; exit(1);     break;
  }
 }
}
int** memory(int n, int m){
  int ** x = new int* [n];
  for(int i = 0; i < n; i++){
     x[i] = new int[m];			// выделение памяти под i-ую строку 
   }
  return x;
}
void delMemory(int** x, int n, int m){	 // освобождение памяти
for(int i = 0; i < n; i++)
  delete [] x[i];
delete [] x;
}
void init(int** x, int n, int m){
  srand(n + m);
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)		// заполнение i-ой строки матрицы 
       x[i][j] = rand() % 25 - 10;
}
void vivod(int** x, int n, int m){
   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         cout.width(5);	cout<<x[i][j];
      }
   cout<<endl;
   }
}
