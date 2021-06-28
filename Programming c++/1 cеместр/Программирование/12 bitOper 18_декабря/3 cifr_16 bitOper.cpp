// Выделение цифр с использованием битовой арифметики
// Цифры выводятся в обратном порядке
#include <iostream>
using namespace std;
int  main(){
   unsigned int n = 555555555;
    cout<<"n_10 = "<<n<<endl;
   cout.unsetf(ios::dec);
   cout.setf(ios::hex);
   cout<<"n_16 = "<<n<<endl;
   int vid=0xF;
   int cifra;
   for(int i = 1; i <= 8; i++)   {
     cifra = n & vid;

     cout<<"n = "<<n<<" cifra = "<<cifra<<' ';
/*      if(cifra >= 0 && cifra <= 9) cout<<' '<<cifra;
     switch(cifra)
     {
        case 10:cout<<"A";break;
        case 11:cout<<"B";break;
        case 12:cout<<"C";break;
        case 13:cout<<"D";break;
        case 14:cout<<"E";break;
        case 15:cout<<"F";break;
     } */

     n = n >> 4;
     cout<<endl;
   }
   cout<<endl;
   system("pause");
  }

