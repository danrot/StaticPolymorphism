#ifndef DERIVED1_H
#define DERIVED1_H

#include "Base.h"

class Derived1 : public Base<Derived1> {
    public:
        void implementation();
};

#endif
