#include"realnumber.h"
#include"integernumber.h"
#include"complexnumber.h"
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
//two RealNumber 1.5,2.5
RealNumber r1(1.5),r2(2.5);
//two IntegerNumber 8,10
IntegerNumber i1(8),i2(10);
//rwo ComplexNumber 9+i,9-i
ComplexNumber c1(9,1),c2(9,-2);

r1.add(r2).print();
r1.mul(r2).print();

i1.add(i2).print();
i1.mul(i2).print();

c1.addComplex(c2).print();
c1.mulComplex(c2).print();

r1.add(i1).print();

c1.mulReal(r1).print();

return 0;
}
