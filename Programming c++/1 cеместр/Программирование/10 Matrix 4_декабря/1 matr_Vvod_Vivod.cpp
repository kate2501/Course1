// ����-����� �������.
#include <iostream>
using namespace std;
const int D1 = 10, D2 = 10;
int main(){
   int a[D1][D2];
   int i, j, n, m;
 while(true){			// �������� ����� n � m
    system("cls");
    cout << "Vvedi n m:";  cin >> n>>m;
    if (n > 0 && n <= D1  &&  m > 0 && m <= D2) break;
     cout << " Error "<<endl; system("pause");
 }
 srand(n + m);			// ���������� ������� ����. �������
 for(int i = 0;  i < n;  i++)
   for(int j = 0;  j < m;  j++)
       a[i][j] = rand() % 15 - 6;

/*
  cout<<"Vvedi matrix "<<endl;		// ���� �������
   for(int i = 0; i < n; i++)
      for(int j = 0; j < n; j++)
          cin>>a[i][j];
*/  
 cout << "\n\tVivod matrix\n";		// ����� �������
 for(int i = 0; i < n; i++){
   for(int j = 0; j < m; j++){
      cout.width(5);
      cout << a[i][j] << ' ';
   }
   cout<<endl;
 }
 system("pause");
}



