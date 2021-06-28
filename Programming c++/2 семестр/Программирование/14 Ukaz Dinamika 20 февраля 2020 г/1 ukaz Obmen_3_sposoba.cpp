 // Передача аргументов в функцию по значению, указателю и ссылке. 
#include <iostream>
using namespace std;
void swap(int, int);
// Передача аргументов по значению (копии)

void swapPtr(int*, int*);
// Передача аргументов как ссылок с помощью указателей

void swapRef (int&, int&);
// Передача аргументов как ссылок с помощью ссылок

int main(){
	int x = 5, y = 10;

	cout << "Main. Before swap, x: " << x << " y: " << y << '\n';
	swap(x,y);   // При вызове имена переменных
	cout << "Main. After swap, x: " << x << " y: " << y << "\n\n";

   cout << "Main. Before swapPtr, x: " << x << " y: " << y << '\n';
   swapPtr(&x,&y); // При вызове адреса переменных
   cout << "Main. After swapPtr, x: " << x << " y: " << y << "\n\n";

   cout << "Main. Before swapRef, x: " << x << " y: " << y << '\n';
   swapRef(x,y);   // При вызове имена переменных
   cout << "Main. After swapRef, x: " << x << " y: " << y << "\n\n";
}

//Передача аргументов по значению (копии)
void swap (int x, int y){
	int temp;
	cout << "Swap. Before swap, x: " << x << " y: " << y << '\n';
	temp = x;	x = y;	y = temp;
	cout << "Swap. After swap, x: " << x << " y: " << y << '\n';
}

//Передача аргументов как ссылок с помощью указателей
void swapPtr(int* px,int* py){
//Внутри функции доступ к значениям переменных через разыменование указателей
	int temp;
	cout << "swapPtr. Before swap, *px: " << *px << " *py: " << *py << '\n';
	temp = *px;	*px = *py;	*py = temp;
	cout << "swapPtr. After swap, *px: " << *px << " *py: " << *py << '\n';
}

//Передача аргументов как ссылок с помощью ссылок
void swapRef (int& rx, int& ry){
 //Внутри функции доступ к значениям переменных по именам
 //без разыменования указателей
	int temp;
	cout << "swapRef. Before swap, rx: " << rx << " ry: " << ry << "\n";
	temp = rx;	rx = ry;	ry = temp;
	cout << "swapRef. After swap, rx: " << rx << " ry: " << ry << "\n";
}
