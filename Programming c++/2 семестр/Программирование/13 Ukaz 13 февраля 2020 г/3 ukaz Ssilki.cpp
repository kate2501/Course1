/*������- ��� ��������� ����������. ��, ��� ���������� �� ������� ����������
� ����������. ��� ������ ������� ����� �������� � r (�� ref).
��� ������ �� ���������� ������.
������������� ������*/
#include <iostream>

void main(){
  int x = 10;
  int& rx = x;
  int* px = &x;
  // ��� ������ �� ���������� ������. ����� x � rx ��� ��.
  // ��� ��������� ���������� ������. ����� x � px ������.
  cout<<"x =   "<<x<<"  adress  x  "<<&x<<'\n';
  cout<<"rx =  "<<rx<<"  adress rx  "<<&rx<<'\n';
  cout<<"*px = "<<*px<<"  adress px  "<<&px<<" px = "<<px<<'\n';
  cout<<"Adress x and rx are the same!\n";
  cout<<"Adress x and px are not the same!\n\n";

  x++;   //x � rx ���������� ������, ������� � x ,� rx ������� �������� �� 2
  rx++;
  cout<<"x++; rx++;\n";
  cout<<"x =   "<<x<<"  adress x  "<<&x<<'\n';
  cout<<"rx =  "<<rx<<"  adress rx "<<&rx<<'\n';
  cout<<"*px = "<<*px<<"  adress px "<<&px<<" px = "<<px<<"\n\n";

  px++; //�������� ��������� px, ������ px ��������� �� ������ ������� ������,
        //� ��� ����� ���� ��������� ����������
  cout<<"px++;\n";
  cout<<"x =   "<<x<<"  adress x  "<<&x<<'\n';
  cout<<"rx =  "<<rx<<"  adress rx "<<&rx<<'\n';
  cout<<"*px = "<<*px<<"  adress px  "<<&px<<"  px = "<<px<<'\n';
}