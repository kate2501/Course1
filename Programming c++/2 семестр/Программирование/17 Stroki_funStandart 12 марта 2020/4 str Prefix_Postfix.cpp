// Пример 4. Операция ++.
#include <iostream>
using namespace std;
int main(){
 const char* str = "tbc";		
 cout<<" = "<<str<<endl;			// tbc
 cout<<" = "<<*str++<<endl;			// t
 cout<<" = "<<*str++<<endl;			// b
// cout<<" = "<<(*str)++<<endl;			// d	Нельзя, т.к. const
			
 char * st = new char[20];			// выделение памяти для st
 strcpy_s(st, 20, "axef");			// копирование "axef" в st
 cout << "st = " << st << endl;			// axef
 cout<<" = "<<(*st)++<<endl;				
 cout<<" = "<<(*st)++<<endl;				

 const char* s = "xbcd";		
 cout<<" = "<<s<<endl;				// xbcz	
 cout<<" = "<<*++s<<endl;			// b
 cout<<" = "<<*++s<<endl;			// c
}