//
// Created by root on 7/11/17.
//

#ifndef HELLOWORLD_MESSAGE_H
#define HELLOWORLD_MESSAGE_H

#include <string>
#include <set>

namespace email{
    class Message{
        friend class Folder;

        friend void swap(Message &lhs,Message &rhs);

    private:
        std::string contents;

        std::set<Folder*> folders;

        void add_to_folders(const Message&);

        void remove_from_folders();

    public:

        Message(const std::string &str=""):contents(str){}

        Message(const Message&);

        Message& operator=(const Message&);

        ~Message();

        void save(Folder&);

        void remove(Folder&);

    };

    void swap(Message &lhs,Message &rhs);
}



#endif //HELLOWORLD_MESSAGE_H
