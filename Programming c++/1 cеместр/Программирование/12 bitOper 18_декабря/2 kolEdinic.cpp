/* ���������� ���������� ������ � ��������
������������� ������ ������������ ����� � �������
�)�������������� ��������, �) ������� ��������*/
#include<iostream>
using namespace std;
int main(){
 unsigned int a, a1;
 int k, m;
 cout<<"vvedy chiclo: ";	 cin>>a;
 cout<<'\n'<<a<<"   "<<hex<<a<<endl;
 a1 = a;

 cout<<" Arithmetic operation == \n";
 k = 0;
 while (a){
  if (a % 2 == 1) k++;
  a = a / 2;
 }
 cout<<"  kol edinic "<<k<<endl<<endl;

 cout<<" Bitovie operation == \n";
 k = 0;	 m = 1;
 while (a1){
  if ((a1 & m) == 1) k++;	// ������ ����� ��-�� ��������� ��������
  a1 >>= 1;			// ��� a1= a1 >> 1;
 }
 cout<<"  kol edinic "<<k<<endl;
 system("pause");
} 


