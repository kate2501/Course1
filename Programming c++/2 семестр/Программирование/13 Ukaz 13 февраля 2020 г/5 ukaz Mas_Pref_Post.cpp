#include <iostream>
using namespace std;
int main(){
    
    const int n = 7;
    int a[n] = { 0, 7, 2, 8, 4, 5, 6 };
    int* p = a;

    for (int i = 0; i < n; i++)
        cout << (a + i) << ' ' << *(a + i) << endl;
    cout << endl;

    cout << "0===" << p << endl;
    cout << "2===" << p++ << ' ' << *p << endl;       	// 7
    cout << "2==="<<p << endl;
    p = a;
    cout << "3===" << p << endl;
    cout << "    " << p++ << endl; 
    cout << "    " << p << endl;
    cout << "4===" <<*p << endl;                         // 7
    cout << "5===" << p << ' ' << *p++ << endl;          // 7
    cout << "6===" << p << ' ' << *(p++) << endl;        // 2
    cout << "7===" << p << ' ' << *++p << endl;          // 4
    cout << "8===" << p << ' ' << *p++ + *p++ << ' ' << endl;       //8
    cout << endl;

    p = a;
    cout << "9===" << p << ' ' << *p << ' ' << p++ << ' ' << *p << endl;        // 7 7


  } 


