// ������ 2. �������� ������������ �������.  ���������� ����� - const.
// ���������� ������ ����������.
// ��� ������ ������  ���������� ������������ ������.
// ����� ��� ������ ������ ������� ������ ���������� ���������.
#include<iostream>
using namespace std;

const int Dim = 20;
int main(){
  int  n, m;
  system("cls");
  cout << "Vvedi n, m: ";  cin >> n>>m;
  srand(n + m);
  int * p[Dim], *x;  
   srand(n + m);
  // ��������� ������������ ������ ��� ������ �������
  for(int i = 0; i < n; i++){
    p[i] = new int[m];                 	  // ��������� ������ ��� i-�� ������ ������� 
    for(int j = 0; j < m; j++)              // ���������� i-�� ������ �������
      p[i][j] = rand() % 25 - 9;
 }
   cout<<"Matrix isxodnaya:  "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout.width(5);
      cout<<*(p[i]+j);                	   // cout<<p[i][j];
    }
    cout<<endl;
  }
 
  // ������������ 0 � 1-�� ����� ������� 
  x = p[0];  p[0] = p[1];  p[1] = x;

  cout<<endl<<" Matrix posle perestanovki "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout.width(5);
      cout<<*(p[i]+j);                   // cout<<p[i][j];
    }
    cout<<endl;
  }

  // ������������ ������������ ������,���������� �������� X
  for(int i = 0; i < n; i++)
     delete [] p[i];                     // �����.������, ���������� i-�� ������� ������� X
   
 }


