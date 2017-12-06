#include <iostream>
#include <string>
#include "Pila.h"

using namespace std;

int main() {
  string mystring = "Ya vali verga."
  Pila<char> pila;

  for (int i = 0; i < mystring.size(); i++) {
    pila.push(mystring[i]);
  }

  while (!pila.isEmpty()) {
    cout<<pila.pop();
  }

  return 0;
}
