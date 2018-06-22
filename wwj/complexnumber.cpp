#include"complexnumber.h"
#include<stdio.h>
#include<iostream>
using namespace std;

ComplexNumber::ComplexNumber(double real,double vir): Number(real,vir){}

void ComplexNumber::print()
{
if(virnumber>0)
cout<<realnumber<<"+"<<virnumber<<"i"<<endl;
else if(virnumber<0)
cout<<realnumber<<virnumber<<"i"<<endl;
else
cout<<realnumber<<endl;
}

ComplexNumber ComplexNumber::addComplex(const ComplexNumber& other)
{
return ComplexNumber(realnumber+other.realnumber,virnumber+other.virnumber);
}

ComplexNumber ComplexNumber::addReal(const RealNumber& other)
{
return ComplexNumber(realnumber+other.realnumber,virnumber);
}

ComplexNumber ComplexNumber::mulComplex(const ComplexNumber& other)
{
double a=realnumber;
double b=virnumber;
double c=other.realnumber;
double d=other.virnumber;
  return ComplexNumber(a*c-b*d,a*d+b*c); 
}

ComplexNumber ComplexNumber::mulReal(const RealNumber& other)
{
return ComplexNumber(realnumber*other.realnumber,virnumber*other.realnumber);
}
