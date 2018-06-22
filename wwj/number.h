#ifndef NUMBER_H
#define NUMBER_H

#include<cstdio>
#include<iostream>
using namespace std;

class Number
{
protected:
virtual void print();
virtual Number add(const Number& );
virtual Number mul(const Number& );
public:
	Number(double,double);
	double realnumber;
double virnumber;
};

#endif
