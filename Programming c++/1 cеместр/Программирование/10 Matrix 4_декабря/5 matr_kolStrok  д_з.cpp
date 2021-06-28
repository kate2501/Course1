//  В данной целочисленной матрице matr[n][m] найти
//  количество строк, в которых нет отрицательных элементов.
#include <iostream>
using namespace std;
const int DIM1 = 20, DIM2 = 20;
int main(){
  int matr[DIM1][DIM2], kol = 0;
  int n, m;
  cout<<"Vvedi n, m: ";   cin>>n>>m;  
  cout<<"  Vvedi massiv\n ";
 // srand(n + m);
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
  //    matr[i][j] = rand() % 25 - 10;
        cin>>matr[i][j];

  cout<<"Matrix isxodnaya:  "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout.width(4); 
      cout<<matr[i][j];
    }
    cout<<endl;
  }
    
  int pr;
  for(int i =0 ; i < n; i++){
      pr = 1;
      for(int j = 0; j < m; j++)
         if(matr[i][j] < 0){pr = 0; break;}
      if (pr == 1) kol = kol++;
  }
 cout<<"kol = "<<kol<<endl;
system("pause");
}