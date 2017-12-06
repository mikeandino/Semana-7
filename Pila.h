#ifndef PILA_H
#define PILA_H

template <class T>
class Pila{
  private:
    vector<T> stack;
  public:
    void push(T);
    T pop();
    bool isEmpty();
    T top();
};

#include "Pila.cpp"

#endif
