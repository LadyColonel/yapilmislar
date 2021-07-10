#include <iostream>
using namespace std;
int main(){
    int sayi;
    cin>>sayi;
    setlocale(LC_ALL,"Turkish");
    if (sayi>10)
        sayi=sayi-10;
    else
        sayi=sayi+10;
    cout<<sayi;
}
