#ifndef BLUEBOX_H
#define BLUEBOX_H

#include "Product.h"

class BlueBox : public Product
{
    ~BlueBox() {}

    void info() {
        std::cout << "Blue box." << std::endl;
    }
};

#endif // BLUEBOX_H
