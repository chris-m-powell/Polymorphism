#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;
//-------------------------------------------------
template <class T>
class Base {
  protected:
    // reference to derived type,
    T& derived = static_cast<T&>(*this);
  public:
    void method() const { return derived.method(); }
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
