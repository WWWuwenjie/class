#ifndef INTEGERNUMBER_H
#define INTEGERNUMBER_H

#include<cstdio>
#include"realnumber.h"

class IntegerNumber:public RealNumber
{
public:
IntegerNumber(int);
void print();
};

#endif
