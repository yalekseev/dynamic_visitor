#include "example_visitable.h"
#include "example_visitor.h"

#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <memory>

void generate_visitables(std::vector<std::shared_ptr<util::Visitable> >& visitables) {
    std::size_t size = std::rand() % 50 + 1;   

    visitables.reserve(size);

    for (std::size_t i = 0; i < size; ++i) {
        std::shared_ptr<util::Visitable> single_visitable;

        switch (std::rand() % 3) {
        case 0:
            single_visitable.reset(new Base);
            break;
        case 1:
            single_visitable.reset(new FirstDerived);
            break;
        case 2:
            single_visitable.reset(new SecondDerived);
            break;
        default:
            throw std::logic_error("Unexpected value.");
        }

        visitables.push_back(single_visitable);
    }
}


int main() {
    std::srand(123);

    std::vector<std::shared_ptr<util::Visitable> > visitables;

    generate_visitables(visitables);

    BaseVisitor base_visitor;
    for (auto& v : visitables) {
        v->accept(base_visitor);
    }

    FirstDerivedVisitor first_visitor;
    for (auto& v : visitables) {
        v->accept(first_visitor);
    }

    SecondDerivedVisitor second_visitor;
    for (auto& v : visitables) {
        v->accept(second_visitor);
    }

    return 0;
}
