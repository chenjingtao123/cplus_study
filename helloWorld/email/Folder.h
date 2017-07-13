//
// Created by root on 7/12/17.
//

#ifndef HELLOWORLD_FOLDER_H
#define HELLOWORLD_FOLDER_H

#include "Message.h"

using namespace email;

class Folder{
public:
    void addMsg(Message* message);

    void remMsg(Message* message);

};

#endif //HELLOWORLD_FOLDER_H
