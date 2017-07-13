//
// Created by root on 7/11/17.
//
#include "Message.h"
#include "Folder.h"

#include <set>

using namespace std;


namespace  email{
    Message::Message(const Message &message):
            contents(message.contents),folders(message.folders) {
        add_to_folders(message);
    }
    Message::~Message() {
        remove_from_folders();
    }

    Message& Message::operator=(const Message &message) {
        remove_from_folders();
        contents=message.contents;
        folders=message.folders;
        add_to_folders(message);
        return *this;
    }

    void Message::save(Folder &f) {
        folders.insert(&f);
        f.addMsg(this);
    }

    void Message::remove(Folder &f) {
        folders.erase(&f);
        f.remMsg(this);
    }

    void Message::add_to_folders(const Message &message) {
        set<Folder*>::iterator it=message.folders.begin();
        while(it!=message.folders.end()){
            (*it)->addMsg(this);
            it++;
        }
    }


    void Message::remove_from_folders() {
        set<Folder*>::iterator it=folders.begin();
        while(it!=folders.end()){
            (*it)->remMsg(this);
            it++;
        }
    }
    void swap(Message &lhs,Message &rhs){
        using std::swap;
        for(auto f:lhs.folders){
            f->remMsg(&lhs);
        }
        for(auto f:rhs.folders){
            f->remMsg(&rhs);
        }
        swap(lhs.folders,rhs.folders);
        swap(lhs.contents,rhs.contents);
        for(auto f:lhs.folders){
            f->addMsg(&lhs);
        }
        for(auto f:rhs.folders){
            f->addMsg(&rhs);
        }
    }

}


