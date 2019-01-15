#include "Person.h"
#include "PersonBuilder.h"

#include <iostream>
#include <sstream>

PersonBuilder Person::create()
{
    return PersonBuilder();
}

std::string Person::to_string() const
{
    std::stringstream stream;

    stream << "Person data:"
           << "\n- Name: " << m_name
           << "\n- Surname: " << m_surName
           << "\n- Age: " << std::to_string( m_age );

    return stream.str();
}
