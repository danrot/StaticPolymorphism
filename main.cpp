#include "Derived1.h"
#include "Derived2.h"

int main(int argc, char **argv) {
    Base<Derived1> *derived1 = new Derived1();
    derived1->method();
    delete derived1;
    
    Base<Derived2> *derived2 = new Derived2();
    derived2->method();
    delete derived2;
}
