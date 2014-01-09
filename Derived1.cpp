#include <iostream>
#include "Derived1.h"

using namespace std;

Derived1::Derived1() {
    j = 1;
}

void Derived1::implementation() {
    cout << "Derived1's implementation: " << i << " and " << j << endl;
}
