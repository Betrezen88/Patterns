#include <iostream>

#include "Object.hpp"
#include "ConcreteObject.hpp"
#include "Decorator.hpp"
#include "DecoratorRed.hpp"

int main()
{
    auto object = ConcreteObject("Concrete object");
    auto decoratorRed = DecoratorRed(&object);

    std::cout << decoratorRed.name() << std::endl;
    return 0;
}
