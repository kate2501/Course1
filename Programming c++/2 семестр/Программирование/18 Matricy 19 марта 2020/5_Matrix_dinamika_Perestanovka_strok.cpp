// ������ 5. ������������ �������.  ��������� �� ���������.
// ������������ ����� �������.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int n, m;
  int ** p;
  cout<<"Vvedi n, m:"; cin>>n>>m;
   srand(n + m);
  p = new int* [n];                		// �����.�����.������ ��� ������ ���������� �� ������
  for(int i = 0; i < n; i++){
    p[i] = new int[m];                  	 // �����.�����.������ ��� i-�� ������
     for(int j = 0; j < m; j++)               	  // ���������� i-�� ������
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

  // ������������ 0 � 1-�� �����
  int* x = p[0];  p[0] = p[1];  p[1] = x;

  cout<<endl<<"Matrix posle perestanovki== "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++)
      cout<<setw(4)<<p[i][j];
    cout<<endl;
  }

  // ������������ ������������ ������,���������� �����.��������
   for(int i = 0; i < n; i++)
     delete [] p[i];          	 // �����.������, ���������� i-�� �������
   delete [] p;                   	 // �����.������, ���������� �������� ����������
 }

