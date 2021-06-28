 // �������� ���������� � ������� �� ��������, ��������� � ������. 
#include <iostream>
using namespace std;
void swap(int, int);
// �������� ���������� �� �������� (�����)

void swapPtr(int*, int*);
// �������� ���������� ��� ������ � ������� ����������

void swapRef (int&, int&);
// �������� ���������� ��� ������ � ������� ������

int main(){
	int x = 5, y = 10;

	cout << "Main. Before swap, x: " << x << " y: " << y << '\n';
	swap(x,y);   // ��� ������ ����� ����������
	cout << "Main. After swap, x: " << x << " y: " << y << "\n\n";

   cout << "Main. Before swapPtr, x: " << x << " y: " << y << '\n';
   swapPtr(&x,&y); // ��� ������ ������ ����������
   cout << "Main. After swapPtr, x: " << x << " y: " << y << "\n\n";

   cout << "Main. Before swapRef, x: " << x << " y: " << y << '\n';
   swapRef(x,y);   // ��� ������ ����� ����������
   cout << "Main. After swapRef, x: " << x << " y: " << y << "\n\n";
}

//�������� ���������� �� �������� (�����)
void swap (int x, int y){
	int temp;
	cout << "Swap. Before swap, x: " << x << " y: " << y << '\n';
	temp = x;	x = y;	y = temp;
	cout << "Swap. After swap, x: " << x << " y: " << y << '\n';
}

//�������� ���������� ��� ������ � ������� ����������
void swapPtr(int* px,int* py){
//������ ������� ������ � ��������� ���������� ����� ������������� ����������
	int temp;
	cout << "swapPtr. Before swap, *px: " << *px << " *py: " << *py << '\n';
	temp = *px;	*px = *py;	*py = temp;
	cout << "swapPtr. After swap, *px: " << *px << " *py: " << *py << '\n';
}

//�������� ���������� ��� ������ � ������� ������
void swapRef (int& rx, int& ry){
 //������ ������� ������ � ��������� ���������� �� ������
 //��� ������������� ����������
	int temp;
	cout << "swapRef. Before swap, rx: " << rx << " ry: " << ry << "\n";
	temp = rx;	rx = ry;	ry = temp;
	cout << "swapRef. After swap, rx: " << rx << " ry: " << ry << "\n";
}
