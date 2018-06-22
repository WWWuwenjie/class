#include"realnumber.h"
#include<stdio.h>
#include<iostream>
using namespace std;

RealNumber::RealNumber(double real): Number(real,0){}

void RealNumber::print()
{
cout<<realnumber<<endl;
}

RealNumber RealNumber::add(const RealNumber& other)
{
return RealNumber(realnumber+other.realnumber);
}

RealNumber RealNumber::mul(const RealNumber& other)
{
return RealNumber(realnumber*other.realnumber);
}
