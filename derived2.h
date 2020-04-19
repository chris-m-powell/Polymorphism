#ifndef DERIVED2_H
#define DERIVED2_H
#include "base.h"
//-------------------------------------------------
class Derived2: public Base<Derived2> {
  private:
  protected:
  public:
    void method_a() const { cout << "2A" << endl; }
    void method_b() const { cout << "2B" << endl; }
};
//-------------------------------------------------
#endif
