//��� ���������� ������  �����. ����������, ���� �� � ��
// ������������������ �� k ���������� �����, ������� �����. 
#include <iostream>
using namespace std;
 const int DIM = 50;
int main(){
     int a[DIM];
   int  n, k, kol; int pr = 0;
   cout<<"Enter size massiva n: ";	   cin>>n;
   cout<<"Enter massiv "<<endl;
   for(int i = 0; i < n; i++)		// ���� �������
      cin>>a[i];
    cout<<"\n\t Massiv a(n)\n";
   for(int i = 0; i < n; i++)		// ����� �������
      cout<<a[i] << ' ';
    cout<<endl;
  cout<<"Vvedi k ";	cin>>k;		// ���� ����� k
  kol = 1;
 for(int i = 0; i < n-1; i++){		// ��������� ���������
    if(a[i] == a[i+1])
   {
       kol++;
       if(kol == k){pr = 1; break;}
     }
      else kol = 1;
   }
   if(pr == 1) cout<<"yes"<<endl;
   else cout<<"no"<<endl;
   system("pause");
}