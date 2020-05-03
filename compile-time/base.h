#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;
//-------------------------------------------------
template <class T>
class Base {
  protected:
    T& derived = static_cast<T&>(*this);    // reference to derived type
  public:
    void method() const { derived.method(); }
};
//-------------------------------------------------
class Derived1: public Base<Derived1> {
  public:
    void method() const { cout << "1" << endl; }
};
//-------------------------------------------------
class Derived2: public Base<Derived2> {
  public:
    void method() const { cout << "2" << endl; }
};
//-------------------------------------------------
#endif
