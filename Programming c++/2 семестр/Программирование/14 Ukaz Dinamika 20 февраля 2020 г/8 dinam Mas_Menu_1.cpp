// Динамический массив создаётся в main().
// Используются функции vvod(), vivod() и меню.
#include<iostream>
using namespace std;
void vivod(int *, int);
void  vvod(int *, int);
int main(){
  int n; 
  cout<<"vvedi kol-vo elementov massiva \n:";  cin>>n;
  int * p = new int[n];
  int vibor; bool flag = true;
  while(flag){
    cout<<"\n vvedite nomer punkta:\n";
    cout<<"vvod----->1"<<endl
        <<"vivod---->2"<<endl
        <<"exit------>3"<<endl;
    cin>>vibor;
    switch(vibor){
      case 1:	vvod(p, n);	break;
      case 2:	vivod(p, n);	break;
      case 3:	cout<<"End!"; 	flag = false;	break;
    }
  }
  cout<<endl;
  delete [] p;
  }

void vvod(int * p, int n){
    cout<< "vvedi massiv: "<<endl;
    for(int i = 0; i < n; i++)
         cin>>*(p+i);
 }
void vivod(int * p,int n){
  cout<<"massiv== "<<endl;
  for(int i = 0; i < n; i++)
//   cout<<p[i]<<' ';
    cout<<*(p+i)<<' ';
 cout<<endl;
}





