#include <iostream>
using namespace std;

template <class T>
class base {
  public:
    string method() const { return static_cast<T const&>(*this).method(); };

    // this shows how it could be useful
    /* T& Self() { return static_cast<T&>(*this); } */
    /* void interface() { // common interface */
      // ....
      /* cout << Self().method() << endl; // specialized implementation */ 
      // ...
    /* } */
};

class derived1: public base<derived1> {
  public:
    string method() const { return "derived1"; }
};

class derived2: public base<derived2> {
  public:
    string method() const { return "derived2"; }
};

template <class T>
void client(base<T> const& x) { cout << x.method() << endl; }

int main() {
  // polymorphism occurs with the base class parameter to client();
  // that is, client() can accept instantiations of either derived class.
  derived1 d1;
  derived2 d2;
  client(d1);
  client(d2);
 
  /* d1.interface(); */
  /* d2.interface(); */
  return 0;
}
