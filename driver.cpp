#include "derived1.h"
#include "derived2.h"
//-------------------------------------------------
  /*
    This program exhibits polymorphic behavior as client() accepts a pointer to 
    an object of the base class that is type-compatible with pointers to either 
    derived class. When invoked, the respective implementations of method_a() 
    and method_b() will be resolved based on the derived-type pointer passed.
  */
template <class T>
void client(Base<T>* x) { 
  cout << (*x).derived.method_a(); 
  (*x).derived.method_b(); 
}
//-------------------------------------------------
int main() {
  Derived1 D1;
  client(&D1);
  
  Derived2 D2;
  client(&D2);

  return 0;
}
//-------------------------------------------------
