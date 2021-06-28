//Указатели. Массивы. Функции.
#include <iostream>
using namespace std;

int sum(int*, int);
const int n = 8;

int main(){
   int x[n] = {0,1,2,3,4,5,6,7};
   int* p = x;
   cout<<"main: adres x = "<<&x<<endl;
   cout<<"main: adres x = "<<&x[0]<<endl;
   cout<<"main: adres x = "<<x<<endl;
   cout<<"main: razmer massiva x = "<<sizeof x<<endl;
   cout<<"main: massiv x== "<<endl;
   for(int i = 0; i < n;i++)
     cout<<*(x + i)<<' ';
 //  cout<<p[i]<<' ';
 //  cout<<x[i]<<' ';
   cout<<endl;
   int s = sum(x, n);
   cout<<"summa vsex elementov = "<<s<<endl;
   s=sum(x, 3);
   cout<<"summa 3-x pervix elementov = "<<s<<endl;
   s=sum(x + 4, 4);
   cout<<"summa 4-x poslednix elementov = "<<s<<endl;
}

int sum(int* a, int kol){
    cout<<"begin sum\n";
    cout<<"sum: znach a = "<<a<<endl;
    cout<<"sum: znach a = "<<&a[0]<<endl;
    cout<<"sum: razmer ukaz* a = "<<sizeof(a) <<endl;
    int s = 0;
    for(int i = 0; i < kol; i++){
     s = s + a [i] ;
    }
    cout<<"end   sum\n\n";
   return s;
}


