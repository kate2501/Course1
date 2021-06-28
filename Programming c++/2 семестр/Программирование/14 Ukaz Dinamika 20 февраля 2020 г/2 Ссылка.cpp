 //  Использование ссылки.
#include <iostream>
using namespace std;
void main(){
int x = 10;
int& rx = x;
// Под ссылку не выделяется память. Адрес x и rx тот же.
cout<<"x =   "<<x<<"  adress  x  "<<&x<<'\n';
cout<<"rx =  "<<rx<<"  adress rx  "<<&rx<<'\n';
x++;						// x и rx изменяются вместе, поэтому и x
rx++;					// и rx изменят значение на 2
cout<<"x++; rx++;\n";
cout<<"x =   "<<x<<"  adress x  "<<&x<<'\n';
cout<<"rx =  "<<rx<<"  adress rx "<<&rx<<'\n';
int y = 20;
rx = y;
rx++;
cout<<"x =   "<<x<<"  adress  x  "<<&x<<'\n';
cout<<"rx =  "<<rx<<"  adress rx "<<&rx<<'\n';
cout<<"x =   "<<x<<"    y =   "<<y<<endl;
//rx = &y				// нельзя
}
