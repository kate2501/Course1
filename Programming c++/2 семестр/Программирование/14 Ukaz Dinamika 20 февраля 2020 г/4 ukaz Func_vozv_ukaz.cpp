// Функция возвращает указатель.
// Передача аргументов в функцию fun() по значению.
// // Передача аргументов в функцию fun1() по указателю.
#include<iostream>
using namespace std;
int* fun(int, int);
int* fun1(int*, int*);
int main(){
  int a = 2, b = 1;
  int* p;
  p = fun(a, b);
  cout<<*p<<endl;
  p = fun1(&a, &b);
  cout<<*p<<endl;
}
int* fun(int x, int y){
  int* t;
  if(x > y) t = &x; else t = &y;
  return t;
}
int* fun1(int* x, int* y){
  int* t;
  if(x > y) t = x; else t = y;
  return t;
}