#include "derived1.h"
#include "derived2.h"
//-------------------------------------------------
/* template <class T> */
/* void clienta(Base<T> const& x) { cout << x.derived() << endl; } */

template <class T>
void client(Base<T>* x) { 
  cout << (*x).derived.method_a(); 
  (*x).derived.method_b(); 
}
//-------------------------------------------------
int main() {
  /*
    polymorphism occurs with the base class parameter to client();
    that is, client() can accept instantiations of either derived class.
  */
  Derived1 D1;
  client(&D1);
  
  Derived2 D2;
  client(&D2);

  return 0;
}
//-------------------------------------------------
