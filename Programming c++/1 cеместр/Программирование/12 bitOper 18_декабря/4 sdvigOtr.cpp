// ����� ������������� �����.
#include <iostream>
#include <iomanip> 
using namespace std;
int  main(){
   int n=-17;		      // ��� �������������  unsigned  ������
   cout<<"n =    "<<n<<endl;
   cout<<"n_16 = "<<hex<<n<<endl;
   n = n << 1;
   cout<<"n<<=1  "<<dec<<n<<"  "<<hex<<n<<endl;
   n = -42;	  		     // ��� �������������  unsigned  ������
   cout<<"n =    "<<dec<<n<<endl;
   cout<<"n_16 = "<<hex<<n<<endl;
   n = n >> 2;
   cout<<"n>>=2  "<<dec<<n<<"  "<<hex<<n<<endl;
   cout<<endl;
   system("pause");
}

