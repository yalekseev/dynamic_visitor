#pragma once

#include "example_visitable.h"

#include <iostream>

class BaseVisitor : public util::Visitor {
    virtual void visit(Base& visitable) {
        std::cout << "BaseVisitor is visiting base visitable." << std::endl;
    }
};

class FirstDerivedVisitor : public util::Visitor {
    virtual void visit(FirstDerived& visitable) {
        std::cout << "FirstDerivedVisitor is visiting FirstDerived visitable." << std::endl;
    }
};

class SecondDerivedVisitor : public util::Visitor {
    virtual void visit(SecondDerived& visitable) {
        std::cout << "SecondDerivedVisitor is visiting SecondDerived visitable." << std::endl;
    }
};
