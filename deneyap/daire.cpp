#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); //Türkçe karakter
   float r,alan,cevre;
   cout<<"Yarýçapý Girin : ";
   cin>>r;
   alan=3.14*r*r;
   cevre=2*(3.14*r);
   cout<<"Alaný : "<<alan<<endl;
   cout<<"Çevresi : "<<cevre;
}
