#pragma once

#include "visitable.h"
#include "visitor.h"

#include <iostream>

class Base : public util::Visitable {
private:
    virtual Visitable& do_accept(util::Visitor& visitor) {
        visitor.visit(*this);
        return *this;
    }
};

class FirstDerived : public Base {
private:
    virtual Visitable& do_accept(util::Visitor& visitor) {
        visitor.visit(*this);
        return *this;
    }
};

class SecondDerived : public Base {
private:
    virtual Visitable& do_accept(util::Visitor& visitor) {
        visitor.visit(*this);
        return *this;
    }
};
