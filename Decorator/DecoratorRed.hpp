#ifndef DECORATORRED_HPP
#define DECORATORRED_HPP

#include "Decorator.hpp"

class DecoratorRed : public Decorator
{
public:
    DecoratorRed(Object *object) : Decorator(object) {}

    std::string name() const { return Decorator::name() + ", Red"; }
};

#endif // DECORATORRED_HPP
