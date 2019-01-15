#ifndef PERSON_H
#define PERSON_H

#include <string>

class PersonBuilder;

class Person
{
public:
    // Thanks to making PersonBuilder a friend class,
    // PersonBuilder can access Person private members
    // without special methods.
    friend class PersonBuilder;

    static PersonBuilder create();
    std::string to_string() const;

private:
    // Private constructor prevents from creating object
    // without using Builder
    Person() = default;

private:
    std::string m_name;
    std::string m_surName;
    uint8_t m_age{0};
};


#endif // PERSON_H
