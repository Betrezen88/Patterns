#include "PersonBuilder.h"
#include "Person.h"

PersonBuilder& PersonBuilder::addName(const std::string &name) {
    m_person.m_name = name;
    return *this;
}

PersonBuilder& PersonBuilder::addSurname(const std::string &surname)
{
    m_person.m_surName = surname;
    return *this;
}

PersonBuilder& PersonBuilder::setAge(const uint8_t &age)
{
    m_person.m_age = age;
    return *this;
}

PersonBuilder::operator Person &&()
{
    return std::move( m_person );
}
