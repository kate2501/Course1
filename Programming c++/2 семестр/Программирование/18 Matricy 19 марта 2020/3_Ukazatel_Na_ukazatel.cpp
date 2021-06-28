// Пример 3. Указатель на указатель.
#include <iostream>
using namespace std;
int main(){
   int x(5),  *q, **p; 			// x(5) равносильно x = 5;
   q = &x; p = &q;
   cout<<"1=  "<<x<<' '<<*q<<' '<<**p<<endl;	// 5 5 5
   int y(7);
   **p = y;
   cout<<"2=  "<<x<<' '<<*q<<' '<<**p<<endl;	// 7 7 7
   *q = 9;
   cout<<"3=  "<<x<<' '<<*q<<' '<<**p<<endl;	// 9 9 9
   int z = 3;  q = &z;
    cout<<"4=  "<<x<<' '<<*q<<' '<<**p<<endl;	// 9 3 3
  
}

