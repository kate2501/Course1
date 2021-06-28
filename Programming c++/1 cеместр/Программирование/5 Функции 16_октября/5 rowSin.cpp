// Вычисление значений функции f(x) = sin(x) на отрезке [a; b] с шагом h
// по формуле Тейлора
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double rowSin(double x, double e);
int main(){ 
   double y, z;
   double a = 0.1,    b = 1,  h = 0.1;
   double E = 0.001;
    for(double x = a; x <= b; x = x + h){
         y = rowSin(x, E);
         z = sin(x);               		 			   // для контроля
         cout<<setw(10)<<x<<" | "<<setw(10)<<y<< " | "<<setw(10)<<z<<endl;  
      }
      system ("pause");
}   
double rowSin(double x, double e){
   double y = x, n = 2, a = x;
   while(fabs(a) > e){
         a = -a * x * x / (n * (n + 1));
         y = y + a;
         n = n + 2;
    }
   return y;
}
