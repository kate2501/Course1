//Дан одномерный массив  чисел. Определить, есть ли в нём
// последовательность из k одинаковых чисел, стоящих рядом. 
#include <iostream>
using namespace std;
 const int DIM = 50;
int main(){
     int a[DIM];
   int  n, k, kol; int pr = 0;
   cout<<"Enter size massiva n: ";	   cin>>n;
   cout<<"Enter massiv "<<endl;
   for(int i = 0; i < n; i++)		// ввод массива
      cin>>a[i];
    cout<<"\n\t Massiv a(n)\n";
   for(int i = 0; i < n; i++)		// вывод массива
      cout<<a[i] << ' ';
    cout<<endl;
  cout<<"Vvedi k ";	cin>>k;		// ввод числа k
  kol = 1;
 for(int i = 0; i < n-1; i++){		// сравнение элементов
    if(a[i] == a[i+1])
   {
       kol++;
       if(kol == k){pr = 1; break;}
     }
      else kol = 1;
   }
   if(pr == 1) cout<<"yes"<<endl;
   else cout<<"no"<<endl;
   system("pause");
}