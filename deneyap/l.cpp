#include <iostream>
#include <windows.h>
    using namespace std;
    int main()
    {
    	setlocale(LC_ALL,"Turkish");
    	system("color f9");
    	int d[6];
    	for(int i = 0;i<6;i++){
            cout<<i+1<<". arkada��n�z�n do�um y�l�n� giriniz "<<endl;
            cin>>d[i];}
        for(int a=0;a<6;a++){
        cout<<a+1<<". arkada��n�z�n do�um y�l�:"<<d[a]<<endl;
        }
    	}


