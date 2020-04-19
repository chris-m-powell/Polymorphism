#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;
//-------------------------------------------------
template <class T>
class Base {
  protected:
  public:
    // derived yields a reference to derived type,
    T& derived = static_cast<T&>(*this);
};
//-------------------------------------------------
#endif
