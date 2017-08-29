#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <string>

class Object
{
public:
    virtual ~Object() {}
    virtual std::string name() const = 0;
};

#endif // OBJECT_HPP
