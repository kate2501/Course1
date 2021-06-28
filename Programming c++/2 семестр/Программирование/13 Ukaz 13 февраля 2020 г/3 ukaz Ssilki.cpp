/*Ссылка- это псевдоним переменной. Всё, что происходит со ссылкой происходит
с переменной. Для ссылок принято имена начинать с r (от ref).
Под ссылку не выделяется память.
Использование ссылок*/
#include <iostream>

void main(){
  int x = 10;
  int& rx = x;
  int* px = &x;
  // Под ссылку не выделяется память. Адрес x и rx тот же.
  // Под указатель выделяется память. Адрес x и px разный.
  cout<<"x =   "<<x<<"  adress  x  "<<&x<<'\n';
  cout<<"rx =  "<<rx<<"  adress rx  "<<&rx<<'\n';
  cout<<"*px = "<<*px<<"  adress px  "<<&px<<" px = "<<px<<'\n';
  cout<<"Adress x and rx are the same!\n";
  cout<<"Adress x and px are not the same!\n\n";

  x++;   //x и rx изменяются вместе, поэтому и x ,и rx изменят значение на 2
  rx++;
  cout<<"x++; rx++;\n";
  cout<<"x =   "<<x<<"  adress x  "<<&x<<'\n';
  cout<<"rx =  "<<rx<<"  adress rx "<<&rx<<'\n';
  cout<<"*px = "<<*px<<"  adress px "<<&px<<" px = "<<px<<"\n\n";

  px++; //изменяем указатель px, теперь px ссылается на другой участок памяти,
        //а там может быть случайная информация
  cout<<"px++;\n";
  cout<<"x =   "<<x<<"  adress x  "<<&x<<'\n';
  cout<<"rx =  "<<rx<<"  adress rx "<<&rx<<'\n';
  cout<<"*px = "<<*px<<"  adress px  "<<&px<<"  px = "<<px<<'\n';
}