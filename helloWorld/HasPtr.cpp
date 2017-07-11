//
// Created by root on 7/10/17.
//
#include "HasPtr.h"

using namespace Test;

std::size_t* HasPtr::getUse(){

    return this->use;
}

inline
void Test::swap(HasPtr& p1,HasPtr& p2){
    using std::swap;

    swap(p1.ps,p2.ps);

    swap(p1.i,p2.i);
}


