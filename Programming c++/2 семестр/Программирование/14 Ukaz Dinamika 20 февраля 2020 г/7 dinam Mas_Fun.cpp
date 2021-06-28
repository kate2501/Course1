// Указатели. Динамические массивы. Функция.
#include<iostream>
using namespace std;

void fun(int* a, int n);

int main(){
   int n;
   cout<<"Vvedi n: "; cin>>n;
   int *p = new int[n];                    		 //создание динамич.массива
  
   for(int i = 0; i < n; i++)
      *(p+i) = i;
   cout<<"main:   p==     "<<p<<endl;
   cout<<"main:   massiv== "<<endl; 
   for(int i = 0; i < n; i++)
       cout<<*(p+i)<<' ';
   cout<<endl;
   fun(p, n);
   cout<<"main:   p==     "<<p<<endl;
   cout<<"main:   massiv== "<<endl; 
   for(int i = 0; i < n; i++)
     cout<<*(p+i)<<' ';
   cout<<endl;
   delete [] p;
 }

void fun(int* a, int n){
    cout<<"fun:   a =      "<<a<<endl;
    cout<<"fun:   massiv=="<<endl; cout<<'\t';
    for(int i = 0; i < n; i++){
      *(a+i) = i*3;
      cout<<*(a+i)<<' ';
    }
    cout<<endl;
}