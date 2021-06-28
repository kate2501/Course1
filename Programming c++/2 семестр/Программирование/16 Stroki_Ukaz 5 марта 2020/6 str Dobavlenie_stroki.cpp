

// Пример 6. Создание и удаление динамической строки.
// Добавление одной строки к концу другой.
#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Vvedi n: ";   cin>>n;
  cin.ignore();			
  char * t = new char[2*n+1];
  cout<<"Adres stroku t = "<<(int)t<<endl;		// адрес строки p
  char * s = new char[n+1];
  cout<<"Adres stroku s = "<<(int)s<<endl;		// адрес строки s
  cout<<"Vvedi stroku t: ";	gets_s(t, n);		// 12345
  cout<<"Vvedi stroku s: ";	gets_s(s, n);		// 6789
  char *pt = t, *ps = s;
  while(*pt != '\0') pt++;		// находим конец строки t
					// в pt будет адрес символа '\0'
 // pt = pt + strlen(t);		// адрес конца строки t можно получить и так
  while(*pt++ = *ps++);			// добавление строки s к строке t

 // cout<<"Stroka t = "; puts(t);	// t = 123456789
  cout<<"Stroka t = "<<t<<endl; 
  cout<<"Stroka s = ";	puts(s);	// s = 6789
  delete [] t;
  delete [] s;
}
