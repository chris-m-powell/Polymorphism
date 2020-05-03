#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;
//-------------------------------------------------
class Base {
  protected:
  public:
    virtual void method() const = 0; 
};
//-------------------------------------------------
class Derived1: public Base {
  public:
    Derived1() {}
    virtual void method() const { cout << "1" << endl; }
};
//-------------------------------------------------
class Derived2: public Base {
  public:
    Derived2() {}
    virtual void method() const { cout << "2" << endl; }
};
//-------------------------------------------------
#endif
