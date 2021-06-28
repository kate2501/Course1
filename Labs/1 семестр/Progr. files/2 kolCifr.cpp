//Сколько раз каждая десятичная цифра встречается
//в записи натурального числа N.
#include <iostream>
using namespace std;
int main(){
 int i, kol, cifra;
 long int n, nrab;
 do{
  cout<<" vvedi n "<<endl;
  cin>>n;
 }while (n == 0 || n < 0);
  cout<<"n = "<<n<<endl;
 for(i = 0; i <= 9; i++){
    nrab = n;  kol = 0;
    while(nrab != 0){
        cifra = nrab % 10;
        if(cifra == i) kol++;
        nrab = nrab/10;
    }
    if(kol != 0)
          cout<<"chislo povtorenii cifri "<<i<<" ---> "<<kol<<endl;
 }
 system("pause");
}