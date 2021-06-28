// ������ 6. � ������������ ������� A(N,M) �����  ����� ��������� � ������ ������,
// ��������� ������� ���������� ����� � ���������� �������.
#include <iostream>
#include<iostream>
using namespace std;

int Summa(int* a, int m) {
  int s = 0;
  for(int i = 0; i<m; i++)
    s = s + a[i];
  return s;
}
int main (){
  int n, m;
  cout<<"Vvedi n, m:"; cin>>n>>m;
  int* sum = new int[n]; 
  srand(n + m);
  int**a = new int*[n];             
  for(int i = 0; i < n; i++){
    a[i] = new int[m];            		//�����.�����.������ ��� i-�� ������
    for(int j = 0; j < m; j++)         		//���������� i-�� ������
      *(a[i] + j) = rand() % 25 - 9;;     
  }
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout.width(5);
      cout<<a[i][j];
    } 
    cout<<endl;
  }

  for(int i = 0; i < n; i++) {			 
    sum[i] = Summa(a[i], m);			// ���������� ����� i-�� ������ 
  }

  cout<<"Sum elementov strok== "<<endl;		// ����� ����
  for(int i = 0; i < n; i++)
    cout<<'\t'<<sum[i]<<endl;
 }
