#ifndef DERIVED2_H
#define DERIVED2_H

#include "Base.h"

class Derived2 : public Base<Derived2> {
    public:
        void implementation();
};

#endif
