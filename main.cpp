#include "Derived1.h"
#include "Derived2.h"

int main(int argc, char **argv) {
    Base<Derived1> derived1;
    derived1.method();
    
    Base<Derived2> derived2;
    derived2.method();
}
