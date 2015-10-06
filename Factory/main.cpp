/*
 * Factory Mode
 * 1) Better conhesion and coppling.
 * 2) Define interfaces of object creations.
 * 3) Make sub class to do the work.
 * 
 * */

#include <stdio.h>
#include "Factory.h"
#include "Product.h"
#include "ConcreteFacorty.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	Factory* fac =  new ConcreteFacorty();
    Product* p = fac->CreateProduct();
    
	return 0;
}
