#include <iostream>
#include "Student.h"

using namespace std;

namespace Test{
    string Student::school="dddd";

    bool printData(const Student& st){
         cout<<"name:"+st.getName()<<",age:"<<st.getAge()<<endl;
    }
    void testDestroy(){

    }

}



