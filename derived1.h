#ifndef DERIVED1_H
#define DERIVED1_H
#include "base.h"
//-------------------------------------------------
class Derived1: public Base<Derived1> {
  private:
  protected:
  public:
    int method_a() const { return 1; }
    void method_b() const { cout << 1 << endl; }
};
//-------------------------------------------------
#endif
