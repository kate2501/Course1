#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int m,k=0;
	do 
	{
		cout << "vvedite m" << endl;
		cin >> m;
		if (m < 0) k++;
	} while (m);
	if (k != 0) cout << "yes";
	else cout << "no";
}




