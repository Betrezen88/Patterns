#ifndef PERSONBUILDER_H
#define PERSONBUILDER_H

#include <string>

#include "Person.h"

class PersonBuilder
{
public:
    PersonBuilder() = default;

    // Methods for setting members of Person class
    PersonBuilder& addName(const std::string& name);
    PersonBuilder& addSurname(const std::string& surname);
    PersonBuilder& setAge(const uint8_t &age);

    // Overload operator() returns m_person object
    // after using PersonBuilder method
    operator Person&&();

private:
    Person m_person;
};

#endif // PERSONBUILDER_H
