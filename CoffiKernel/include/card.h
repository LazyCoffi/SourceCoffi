#ifndef CARD_H
#define CARD_H

#include "inner_data.h"

enum CardType {
    CHARACTER_CARD,
    EQUIPMENT_CARD,
    SKILL_CARD,
    ITEM_CARD,
};

class BaseCard {
public:
    virtual Text get_name() = 0;
    virtual Text get_introduction() = 0;
    virtual Image get_Image() = 0; 
    virtual CardType get_type() = 0;
    virtual void load(Args&) = 0;
    virtual Args pack() = 0;
};

class CharacterCard : public BaseCard {
private:
    CardType type;
    CharacterInfo c_info;
    CharacterAttr c_attr;
    CharacterState c_state;
public:
    CharacterCard(Args& args);
    Args pack();
    CharacterInfo& info();
    CharacterAttr& attr();
    CharacterState& state();
};

#endif