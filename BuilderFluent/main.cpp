#include <iostream>

#include "Person.h"
#include "PersonBuilder.h"

int main()
{
    std::cout << "Design Pattern: Builder(Fluid)" << std::endl << std::endl;

    Person person = Person::create().addName("John").addSurname("Doe").setAge(20);

    std::cout << person.to_string() << std::endl << std::endl;

    return 0;
}
