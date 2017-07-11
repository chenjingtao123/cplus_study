//
// Created by root on 7/7/17.
//

#ifndef HELLOWORLD_STUDENT_H
#define HELLOWORLD_STUDENT_H

#include <string>

namespace  Test{
    class Student{
    public:
        Student(){
        }
//        Student(const Student& st){
//           this->name=st.getName();
//            this->age=st.getAge();
//            this->p=st.p;
//        }
        ~Student(){
            std::cout<<"~Student"<<std::endl;

        }
        Student(std::string name,int age): name(name),age(age){
        }

        explicit Student(std::string name): name(name),age(10){
        }
        std::string getName() const{
            return this->name;
        }
        int getAge() const{
            return this->age;
        }

        static std::string school;

        int* p= nullptr;

    private:
        std::string name;
        int age;
    };

    bool  printData(const Student& st);

    void testDestroy();
}



#endif //HELLOWORLD_STUDENT_H
