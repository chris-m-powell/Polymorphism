#include "base.h"
//-------------------------------------------------
template <class T>
void client(Base<T>* x) { (*x).method(); } // method is polymorphic
//-------------------------------------------------
int main() {
  Derived1 D1;  // inherits from Base<Derived1> 
  client(&D1);
  
  Derived2 D2;  // inherits from Base<Derived2>
  client(&D2);

  return 0;
}
//-------------------------------------------------
