#include <iostream>
#include <windows.h>
    using namespace std;
    int main()
    {
    	setlocale(LC_ALL,"Turkish");
    	system("color f9");
    	int d[6];
    	for(int i = 0;i<6;i++){
            cout<<i+1<<". arkadaþýnýzýn doðum yýlýný giriniz "<<endl;
            cin>>d[i];}
        for(int a=0;a<6;a++){
        cout<<a+1<<". arkadaþýnýzýn doðum yýlý:"<<d[a]<<endl;
        }
    	}


