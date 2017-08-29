#ifndef CONCRETEOBJECT_HPP
#define CONCRETEOBJECT_HPP

#include "Object.hpp"

class ConcreteObject : public Object
{
public:
    ConcreteObject(const std::string name) : m_name(name) {}
    ~ConcreteObject() {}

    std::string name() const override { return m_name; }

private:
    std::string m_name;
};

#endif // CONCRETEOBJECT_HPP
