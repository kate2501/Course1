 //  ������������� ������.
#include <iostream>
using namespace std;
void main(){
int x = 10;
int& rx = x;
// ��� ������ �� ���������� ������. ����� x � rx ��� ��.
cout<<"x =   "<<x<<"  adress  x  "<<&x<<'\n';
cout<<"rx =  "<<rx<<"  adress rx  "<<&rx<<'\n';
x++;						// x � rx ���������� ������, ������� � x
rx++;					// � rx ������� �������� �� 2
cout<<"x++; rx++;\n";
cout<<"x =   "<<x<<"  adress x  "<<&x<<'\n';
cout<<"rx =  "<<rx<<"  adress rx "<<&rx<<'\n';
int y = 20;
rx = y;
rx++;
cout<<"x =   "<<x<<"  adress  x  "<<&x<<'\n';
cout<<"rx =  "<<rx<<"  adress rx "<<&rx<<'\n';
cout<<"x =   "<<x<<"    y =   "<<y<<endl;
//rx = &y				// ������
}
