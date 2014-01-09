#ifndef DERIVED1_H
#define DERIVED1_H

#include "Base.h"

class Derived1 : public Base<Derived1> {
    private:
        int j;
    public:
        Derived1();
        void implementation();
};

#endif
