
#include <iostream>
using namespace std;
main(){
   int a[5] = {0, 1, 2,3, 5};
   int *p1 = a, *p2 = &a[0];

   cout<<"0==   "<<sizeof(a)<<' '<<sizeof(a[0])<<' '<<sizeof(p1)<<' '<<sizeof(*p1)<<endl;
   cout<<"1==   "<<sizeof(a)/sizeof(a[0])<<endl;
   cout<<"2==   "<<sizeof(p1)/sizeof(*p1)<<endl;

   cout<<"3==   "<<a<<' '<<p1<<' '<<p2<<endl;
   cout<<"4==   "<<*a<<&a[0]<<' '<<&a[1]<<' '<<&a[2]<<' '<<&a[3]<<' '<<&a[4]<<endl;
   cout<<"5==   "<<a[1]<<' '<<*(a+1)<<' '<<*++p2<<endl;
   p2=p1 + 4;
   cout<<"6==   "<<p2<<' '<<p1<<' '<<p2-p1<<' '<<*p1<<' '<<*p2<<endl;

   cout<<"7==   ";
   for(int i = 0;i < 5;i++)
     cout<<a[i]<<' ';
   cout<<endl;

   cout<<"8==   ";
   for(int i = 0;i <5;i++)
     cout<<*(a + i)<<' ';
   cout<<endl;

   cout<<"9==   ";
   for(int i=0;i<5;i++)
     cout<<p1[i]<<' ';
   cout<<endl;

   cout<<"10==  ";
   for(int i = 0;i<5;i++)
     cout<<*(p1 + i)<<' ';
   cout<<endl;

   cout<<"11==  ";
   for(int i = 0;i<5;i++)
     cout<<*p1++<<' ';
   cout<<endl;
   
   cout<<"12==  ";
   for( p1 = a;p1 < a+5;p1++)
     cout<<*p1<<' ';
   cout<<endl;

   p1 = a;                              // !!!!!
   int x=*++p1 + 3;
   int y=*(p1 + *p1);
   cout<<"13==    "<<x<<' '<<y<<endl;

 cout<<"14==  ";
 int c=&a[3] - &a[0];
 cout<<"c=  "<<c<<endl;              // c = 3
 c = &a[2] - a;
 cout<<"      c=  "<<c<<endl;        // c = 2
 cout<<endl;

 cout<<"15==  ";
 p1 = a;                     		 // p1 = a
 for(int i=0;i<5;i++)         		 // 0 1 2 3 5
   cout<<(*p1)++<<' ';        	 	 // выводится  и изменяется 4 раза
 cout<<endl;                  		 // значение нулевого элемента массива
 cout<<"      "<<*p1<<endl;   		 // 5

 
 cout<<"16==  ";
 int s = 0;  p1 = a;
 for( ;p1 <= &a[4]; p1++)
   s+=*p1;                    	  // s+=*p
 cout<<"s =  "<<s<<endl;           	  // s = 16
 
}   
