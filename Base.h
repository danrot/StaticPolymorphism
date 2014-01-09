#ifndef BASE_H
#define BASE_H

template <typename Derived>
class Base {
    public:
        void method() {
            static_cast<Derived*>(this)->implementation();
        }
};

#endif
