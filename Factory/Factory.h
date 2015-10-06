#ifndef FACTORY_H
#define FACTORY_H

class Product;

class Factory
{
public:
    Factory();
    virtual Product* CreateProduct()=0;
    virtual ~Factory()=0;

};

#endif // FACTORY_H
