#include <iostream>
using namespace std;
void bprint(int val);
    int main()
    {
        int sayi1;
        int sayi2;
        cout<<"dilenci degilim ama bir tanecik sayinizi alabilir miyim?"<<endl;
        cin >>sayi1;
        cout<<"hmmm.. bu yetmedi bir taneye daha ihtiyacim var"<<endl;
        cin>>sayi2;
        if (sayi1&sayi2){
            cout<<"esitler";
        }
        else
            cout<<"esit degiller";
    }
