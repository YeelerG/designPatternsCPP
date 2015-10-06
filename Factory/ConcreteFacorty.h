#ifndef CONCRETEFACORTY_H
#define CONCRETEFACORTY_H

#include "Factory.h" // Base class: Factory
#include "Product.h"

//class Product;

class ConcreteFacorty : public Factory
{
public:
    ConcreteFacorty();
    ~ConcreteFacorty();

    Product* CreateProduct();

};

#endif // CONCRETEFACORTY_H
