#include "base.h"
//-------------------------------------------------
  /*
    This program exhibits polymorphic behavior as client() accepts a pointer to 
    an object of the base class (i.e., Base<Derived1> or Base<Derived2>) but 
    is type-compatible with pointers to either derived class (i.e., Derived1 
    or Derived2); that is, when invoked, the implementation of 
    method_a() and method_b() is be resolved based on the derived-type pointer 
    passed.
  */
template <class T>
void client(Base<T>* x) { 
  (*x).method(); 
}
//-------------------------------------------------
int main() {
  Derived1 D1;  //declares on object of type Derived1 which inherits from Base<Derived1> 
  client(&D1);
  
  Derived2 D2;  //declares on object of type Derived2 which inherits from Base<Derived2>
  client(&D2);

  return 0;
}
//-------------------------------------------------
