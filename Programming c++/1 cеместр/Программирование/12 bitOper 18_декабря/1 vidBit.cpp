// Выделение разрядов
#include <iostream>
using namespace std;
int main(){
 int n = 2, m;  cout<<"n = "<<n<<endl;
// Выделение 0, 1, 2 разрядов. Изменяем исходное число.
 int k = 1;      m = n & k;
 cout<<"m = "<<m<<endl;
 n = n >> 1;    m = n & k;		// или n >>= 1;
 cout<<"m = "<<m<<endl;
 n = n >> 1;    m = n & k;
 cout<<"m = "<<m<<endl;
cout<<"n = "<<n<<endl;
// Выделение 0, 1, 4 разрядов. Не изменяем исходное число.
short int z = 0x5c;
 cout<<hex<<z<<endl;
 int k1 = z & 1;
 int k2 =(z & 2)>>1;
 int k3 =(z & 16)>>4;
 cout<<"k1 = "<<k1<<" k2 = "<<k2<<" k3 = "<<k3<<endl;
 cout<<hex<<z<<endl;
 system("pause");
}
