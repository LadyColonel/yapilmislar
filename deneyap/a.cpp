#include <iostream>
#include <clocale>
#include <windows.h>

using namespace std; // std::

int main(){
	setlocale(LC_ALL, "turkish");

	int n;
	int sayi;
	int toplam=0;

	cout << "Ka� adet say� gireceksiniz: ";
	cin >> n;

	cout << endl;
	for(int i=1; i<=n; i++){
		cout << i  << ". say�y� giriniz: ";
		cin >> sayi;
		toplam=toplam+sayi;
	}

	cout << endl;
	cout << "Girilen " << n << " say�n�n toplam�: " << toplam << endl;

	system("PAUSE");
	return 0;
}
