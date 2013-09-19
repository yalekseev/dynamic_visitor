#include <iostream>
#include <typeinfo>

#include <iostream>

class Base;
class FirstDerived;
class SecondDerived;

namespace util {

class Visitable;

class Visitor {
public:
    virtual ~Visitor() { }

    virtual void visit(Visitable& visitable) { }
    virtual void visit(Base& visitable) { }
    virtual void visit(FirstDerived& visitable) { }
    virtual void visit(SecondDerived& visitable) { }
};

} // namespace
