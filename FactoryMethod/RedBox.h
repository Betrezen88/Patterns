#ifndef REDBOX_H
#define REDBOX_H

#include "Product.h"

class RedBox : public Product
{
public:
    ~RedBox() {}

    void info() {
        std::cout << "Red box." << std::endl;
    }
};

#endif // REDBOX_H
