// ќпределить количество единиц в двоичном
// представлении целого беззнакового числа, 
//  использу€ арифметические операции 
#include<iostream>
using namespace std;
int main(){
 unsigned int n;
 int k = 0;
 cout<<"vvedy chiclo: ";	 cin>>n;
 cout<<'\n'<<n<<"   " <<hex<<n<<endl;
  while (n){
    if (n % 2 == 1) k++;
    n = n / 2;
 }
 cout<<"  kol edinic "<<k<<" v chisle "<<n<<endl;

  system("pause");
} 


