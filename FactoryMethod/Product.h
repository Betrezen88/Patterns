#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

class Product
{
public:
    virtual ~Product() {}
    virtual void info() =0;
};

#endif // PRODUCT_H
