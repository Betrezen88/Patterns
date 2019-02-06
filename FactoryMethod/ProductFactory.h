#ifndef PRODUCTFACTORY_H
#define PRODUCTFACTORY_H

#include "BlueBox.h"
#include "GreenBox.h"
#include "RedBox.h"

class ProductFactory
{
public:
    static Product *create(const int &i) {
        Product *pProduct{nullptr};

        if ( 1 == i )
            pProduct = new BlueBox();
        else if ( 2 == i )
            pProduct = new GreenBox();
        else
            pProduct = new RedBox();

        return pProduct;
    }
};

#endif // PRODUCTFACTORY_H
