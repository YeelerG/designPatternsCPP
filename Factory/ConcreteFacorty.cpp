#include "ConcreteFacorty.h"
#include <iostream>
#include "ConcreteProduct.h"

using namespace std;

ConcreteFacorty::ConcreteFacorty()
{
    cout << "This is Concrete Factory" << endl;
}

ConcreteFacorty::~ConcreteFacorty()
{
}

Product* ConcreteFacorty::CreateProduct()
{
    return new ConcreteProduct();
}
