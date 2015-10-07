#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include "Product.h"

class AbstractFactory
{
public:
    AbstractFactory();
    virtual ~AbstractFactory();
    virtual AbstractProductA* CreateProductA()=0;
    virtual AbstractProductB* CreateProductB()=0;
};

class ConcreteFactory1: public AbstractFactory
{
public:
    ConcreteFactory1();
    ~ConcreteFactory1();
    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
};

class ConcreteFactory2: public AbstractFactory
{
public:
    ConcreteFactory2();
    ~ConcreteFactory2();
    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
};
#endif // ABSTRACTFACTORY_H
