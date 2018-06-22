#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include"number.h"
#include"realnumber.h"
#include<cstdio>

class ComplexNumber:public Number
{
public:
ComplexNumber(double,double);
void print();
ComplexNumber addComplex(const ComplexNumber&);
ComplexNumber addReal(const RealNumber&);
ComplexNumber mulComplex(const ComplexNumber&);
ComplexNumber mulReal(const RealNumber&);
};

#endif
