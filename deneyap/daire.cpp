#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
   float r,alan,cevre;
   cout<<"Yar��ap� Girin : ";
   cin>>r;
   alan=3.14*r*r;
   cevre=2*(3.14*r);
   cout<<"Alan� : "<<alan<<endl;
   cout<<"�evresi : "<<cevre;
}
