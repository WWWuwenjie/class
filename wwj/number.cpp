#include"number.h"
#include<iostream>
#include<stdio.h>
using namespace std;

Number::Number(double real,double vir)
{realnumber=real;virnumber=vir;}

void Number::print()
{cout<<"number"<<endl;}

Number Number::add(const Number& other){}
Number Number::mul(const Number& other){}

