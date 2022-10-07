#ifndef BUFF_H
#define BUFF_H

#include "inner_data.h"

class Buff {
    virtual void exec_attr(CharacterAttr&) = 0;
    virtual void exec_state(CharacterState&) = 0;
};

#endif