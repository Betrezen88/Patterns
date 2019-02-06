#include <iostream>

#include "ProductFactory.h"

int main()
{
    std::cout << "Factory method example" << std::endl << std::endl;

    Product *pProduct{nullptr};

    std::cout << "Creating blue box." << std::endl;
    pProduct = ProductFactory::create(1);
    pProduct->info();
    delete pProduct;

    std::cout << std::endl << "Creating green box." << std::endl;
    pProduct = ProductFactory::create(2);
    pProduct->info();
    delete pProduct;

    std::cout << std::endl << "Creating red box." << std::endl;
    pProduct = ProductFactory::create(3);
    pProduct->info();
    delete pProduct;

    std::cout << std::endl;

    return 0;
}
