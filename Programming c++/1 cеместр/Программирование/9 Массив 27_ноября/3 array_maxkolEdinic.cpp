//  ������� kolEd() ������� ���������� ������ � �������� ������������� �����.
// ������� maxKol() ������� ������� ������� � ������������ ����������� ������.
//  � main() �������� ������. ��������� ������, ���������.
  
#include<iostream>
#include <iomanip> 
using namespace std;

int kolEd(int x);			// �������� ������� kolEd()		
int max_kolEd(int mas[], int n);		//  �������� ������� max_kolEd()

const int DIM = 40; 
int main(){
     int a[DIM];
     int n, kol, index;
     cout<<" Enter size massiva n: ";   cin>>n;
     cout<<"\nEnter massiv:"<<endl;
    for(int i = 0; i < n; i++)		// ���� �������
         cin>>a[i];
    cout<<"\nIsxodni massiv\n";		// ����� �������
    for(int i = 0; i < n; i++)
        cout<<dec<<a[i]<<' '<<hex<<"("<<a[i]<<")";
    cout<<endl;
    index =  max_kolEd(a, n);
   cout<<" maxKol edinic v "<<a[index]<<endl;
   system("pause");
} 
int kolEd(int x){
   int n, m, cifra;
   int  kol = 0;  
   n = x;
   while (n){
      cifra = n % 2;   
      kol = kol + cifra;		// ���  if(cifra == 1) kol++;
      n = n / 2;
  }
  cout<<dec<<" koled = "<<kol<<" v "<<x<<endl;
  return kol;
}
int max_kolEd(int mas[], int n){
   int max = 0,  z, ind ;
   for(int i =0; i < n; i++){
     z = kolEd(mas[i]);
     if(z > max) {max = z; ind = i;}
   }
//   cout<<"max = "<<max<<" ind = "<<ind<<endl;	// ��� ��������
   return ind;
}
