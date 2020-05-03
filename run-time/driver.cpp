#include "base.h"
//-------------------------------------------------
void client(Base* x) { (*x).method(); } // method is polymorphic
//-------------------------------------------------
int main() {
  Derived1 D1;  // inherits from Base 
  client(&D1);

  Derived2 D2;  // inherits from Base
  client(&D2);

  return 0;
}
//-------------------------------------------------
