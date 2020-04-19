#ifndef DERIVED1_H
#define DERIVED1_H
#include "base.h"
//-------------------------------------------------
class Derived1: public Base<Derived1> {
  private:
  protected:
  public:
    void method_a() const { cout << "1A" << endl; }
    void method_b() const { cout << "1B" << endl; }
};
//-------------------------------------------------
#endif
