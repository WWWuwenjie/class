#ifndef REALNUMBER_H
#define REALNUMBER_H

#include<cstdio>
#include"number.h"
#include<iostream>
using namespace std;

class RealNumber:public Number 
{
public:
RealNumber(double);
virtual void print();
RealNumber add(const RealNumber&);
RealNumber mul(const RealNumber&);
};

#endif
