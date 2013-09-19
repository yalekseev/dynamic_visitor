#pragma once

#include <typeinfo>
#include <cassert>

namespace util {

class Visitor;

class Visitable {
public:
    virtual ~Visitable() { }

    void accept(Visitor& visitor) {
        assert(typeid(do_accept(visitor)) == typeid(*this));
    }

private:
    virtual Visitable& do_accept(Visitor& visitor) = 0;
};

} // namespace util
