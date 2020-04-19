#ifndef DERIVED2_H
#define DERIVED2_H
#include "base.h"
//-------------------------------------------------
class Derived2: public Base<Derived2> {
  private:
  protected:
  public:
    int method_a() const { return 2; }
    void method_b() const { cout << 2 << endl; }
};
//-------------------------------------------------
#endif
