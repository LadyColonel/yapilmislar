#include <iostream>

using namespace std;

int main(){

  for (int carpan = 1; carpan < 10; carpan++) {
    for (int carpilan = 1; carpilan < 10; carpilan++) {
      cout << carpan << " * " << carpilan << " = " << carpan * carpilan << endl;
    }
    cout << endl;
  }

  return 0;
}
