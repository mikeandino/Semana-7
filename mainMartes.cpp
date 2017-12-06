#include <iostream>
#include "Int.h"
using namespace std;

int main() {
  Int A(5);
  Int B(5);

  cout << A+B << '\n';

  Int *i1 = new Int(20);
  Int *i2 = new Int(1);

  cout << (*i1)+(*i2)<<endl;

  cout <<A<<endl;

  delete i1;
  delete i2;
  return 0;
}
