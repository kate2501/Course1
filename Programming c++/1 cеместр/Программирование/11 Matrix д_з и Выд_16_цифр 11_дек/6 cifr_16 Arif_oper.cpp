// ��������� ���� ����� � �������� �������
// � �������������� �������������� ��������
#include <iostream>
using namespace std;
int  main(){
   int n=555555555;
   cout<<"n_10= "<<n<<endl;
   cout.unsetf(ios::dec);		// ����� �� ����� ������������ 
   cout.setf(ios::hex);			// ���� #include <iomanip> 
   cout<<"n_16= "<<n<<endl;
   int cifra;
   for(int i = 1; i <= 8; i++)   {
     cifra = n % 16;
     cout<<" n = "<<n<<" cifra= "<<cifra;
     n = n / 16;

/*     if(cifra >= 0 && cifra <= 9) cout<<' '<<cifra;
     switch(cifra)                      // ���� ������  cout.setf(ios::hex);
     {                                        // �� ��������  switch �����
        case 10:cout<<" A";	break;
        case 11:cout<<" B";	break;
        case 12:cout<<" C";	break;
        case 13:cout<<" D";	break;
        case 14:cout<<" E";	break;
        case 15:cout<<" F";	break;
     }*/
     cout<<endl;
   }
   cout<<endl;
   system("pause");
  }

