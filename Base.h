#ifndef BASE_H
#define BASE_H

template <typename Derived>
class Base {
    protected:
        int i;
    public:
        Base() {
            i = 42;
        }
    
        void method() {
            static_cast<Derived*>(this)->implementation();
        }
};

#endif
