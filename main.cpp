#include "example_visitable.h"
#include "example_visitor.h"

#include <iostream>

int main() {
    util::Visitable *visitable_ptr;
    FirstDerived first_derived;
    visitable_ptr = &first_derived;

    FirstDerivedVisitor first_visitor;
    util::Visitor *visitor_ptr = &first_visitor;
    visitable_ptr->accept(*visitor_ptr);

    return 0;
}
