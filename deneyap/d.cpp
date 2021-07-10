#include <iostream>
using namespace std;
    class Tasit{
    public:
    string tasitcik;
    string marka;
    void ekle(){
        cout<<"Taşıt türü giriniz:"<<endl;
        cin>> tasitcik;
        cout<<"Taşıt markası giriniz:"<<endl;
        cin>>marka;
    }

    void goster(){
    cout<<"Taşıtınızın türü:"<<tasitcik<<"Taşıtınızın markası"<<marka<<endl;


    }
    };
int main(){
    Tasit mytasit;
    mytasit.ekle();
    mytasit.goster();
    return 0;
    }
