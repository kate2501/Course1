

// ������ 6. �������� � �������� ������������ ������.
// ���������� ����� ������ � ����� ������.
#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Vvedi n: ";   cin>>n;
  cin.ignore();			
  char * t = new char[2*n+1];
  cout<<"Adres stroku t = "<<(int)t<<endl;		// ����� ������ p
  char * s = new char[n+1];
  cout<<"Adres stroku s = "<<(int)s<<endl;		// ����� ������ s
  cout<<"Vvedi stroku t: ";	gets_s(t, n);		// 12345
  cout<<"Vvedi stroku s: ";	gets_s(s, n);		// 6789
  char *pt = t, *ps = s;
  while(*pt != '\0') pt++;		// ������� ����� ������ t
					// � pt ����� ����� ������� '\0'
 // pt = pt + strlen(t);		// ����� ����� ������ t ����� �������� � ���
  while(*pt++ = *ps++);			// ���������� ������ s � ������ t

 // cout<<"Stroka t = "; puts(t);	// t = 123456789
  cout<<"Stroka t = "<<t<<endl; 
  cout<<"Stroka s = ";	puts(s);	// s = 6789
  delete [] t;
  delete [] s;
}
