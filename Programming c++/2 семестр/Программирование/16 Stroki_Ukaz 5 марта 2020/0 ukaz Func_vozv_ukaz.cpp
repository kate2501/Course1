// Функция возвращает указатель.
//  Передача аргументов в функцию fun() по указателю, ссылке.
#include<iostream>
using namespace std;

int* fun(int*, int*);
int* fun1(int&, int&);
int main(){
  int a = 2, b = 1;
  int* p;
  p = fun(&a, &b);
  cout<<*p<<endl;
  p = fun1(a, b);
  cout<<*p<<endl;
  
}

int* fun1(int& x, int& y){
  if(x > y) return &x;
  else return &y;
}
int* fun(int* x, int*  y){
  if(*x > *y) return x;
  else return y;
}
/*int* fun1(int& x, int& y){
  int t;
  if(x > y) t = x; else t = y;
  return &t;
}*/