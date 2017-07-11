#include <iostream>
#include "HasPtr.h"

using namespace std;

int main() {

    HasPtr obj1=HasPtr("cjt");

    HasPtr obj2;

    obj2=obj1;

    cout<<*obj2.getUse()<<endl;

    cout<<*obj1.getUse()<<endl;


    return 0;
}

