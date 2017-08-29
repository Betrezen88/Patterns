#include <iostream>

#include "Object.hpp"
#include "ConcreteObject.hpp"

int main()
{
    auto object = ConcreteObject("Concrete object");

    std::cout << object.name() << std::endl;
    return 0;
}
