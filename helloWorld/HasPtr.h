//
// Created by root on 7/10/17.
//

#ifndef HELLOWORLD_HASPTR_H
#define HELLOWORLD_HASPTR_H

#include <string>
namespace Test{
    class HasPtr{
    public:
        HasPtr(const std::string &s = std::string()):
                ps(new std::string(s)),i(0),use(new std::size_t(1)){}
        HasPtr(const HasPtr &p):
                ps(p.ps),i(p.i),use(p.use){
            ++*use;
        }
        HasPtr& operator=(const HasPtr& op){
            this->ps=op.ps;
            this->i=op.i;
            this->use=op.use;
            ++*(this->use);
            return *this;
        }
//        HasPtr& operator=(HasPtr op){
//            swap(*this,op);
//            return *this;
//        }
        ~HasPtr(){
            if(--*use==0){
                delete ps;
                delete use;
            }
        }
        std::size_t* getUse();
        friend void swap(HasPtr& p1,HasPtr& p2);

    private:
        std::string *ps;
        int i;
        std::size_t  *use;
    };
    void swap(HasPtr& p1,HasPtr& p2);
}

#endif //HELLOWORLD_HASPTR_H
