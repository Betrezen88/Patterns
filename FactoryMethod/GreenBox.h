#ifndef GREENBOX_H
#define GREENBOX_H

#include "Product.h"

class GreenBox : public Product
{
public:
    ~GreenBox() {}
    void info() {
        std::cout << "Green box." << std::endl;
    }
};

#endif // GREENBOX_H
