#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include "Object.hpp"

#include <string>
#include <memory>

class Decorator : public Object
{
public:
    Decorator(Object *object)
    {
        m_object.reset(object);
    }

    std::string name() const
    {
        return m_object.get()->name();
    }

private:
    std::unique_ptr<Object> m_object;
};

#endif // DECORATOR_HPP
