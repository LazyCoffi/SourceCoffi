#ifndef INNER_DATA_H
#define INNER_DATA_h

#include "args.h"
#include "content.h"
#include "buff.h"
#include "container.h"

enum Race {
    HUMAN,
    ELF,
    ORC,
    DWARF,
};

enum Gender {
    MALE,
    FEMALE
};

class InnerData{
public:
    void load(Args& args);
    Args pack();
};

class CharacterInfo : public InnerData{
private:
    Text name;
    Race race;
    Gender gender;
    int age;
    int height;         // CM
    int weight;         // KG
    Text introduction;    
    Image image;
public:
    CharacterInfo();
    void load(Args& args);
    Text get_name();
    Race get_race();
    Gender get_gender();
    int get_age();
    int get_height();
    int get_weight();
    Text get_introduction();
    Image get_image();
    Args pack();
};

class CharacterAttr : public InnerData{
private:
    int strength;           //力量
    int agility;            //敏捷
    int insight;            //洞察
    int intelligence;       //智力
    int perserverance;      //坚韧
    int mystery;            //神秘
    int belief;             //信仰
    int physique;           //体格
    int speed;              //速度

    int survive;            //生存
    int social;             //社交
    int dexterity;          //手巧
    int knowledge;          //见识



public:
    CharacterAttr();
    void load(Args& args);
    Args pack();

    int get_stg();
    int get_agi();
    int get_ist();
    int get_itg();
    int get_prs();
    int get_msy();
    int get_bel();
    int get_phy();
    int get_spd();
    int get_srv();
    int get_soc();
    int get_dex();
    int get_kng();

    void set_stg(int);
    void set_agi(int);
    void set_ist(int);
    void set_itg(int);
    void set_prs(int);
    void set_msy(int);
    void set_bel(int);
    void set_phy(int);
    void set_spd(int);
    void set_srv(int);
    void set_soc(int);
    void set_dex(int);
    void set_kng(int);
};

class CharacterState : public InnerData {
private:
    int max_head_hp;
    int head_hp;
    int max_chest_hp;
    int chest_hp;
    int max_arm_hp;
    int arm_hp;
    int max_leg_hp;
    int leg_hp;
    int max_stress;
    int stress;
    int max_weight;
    int weight;

    OrderContainer<Buff> static_buff;
    OrderContainer<Buff> continuous_buff;
    
public:
    CharacterState();
    void load(Args& args);
    Args pack();
    void add_buff(Buff);
    void del_buff(Buff);
    void update();
    
    int get_max_head_hp();
    int get_head_hp();
    int get_max_chest_hp();
    int get_chest_hp();
    int get_max_arm_hp();
    int get_arm_hp();
    int get_max_leg_hp();
    int get_leg_hp();
    int get_max_stress();
    int get_stress();
    int get_max_weight();
    int get_weight();
};

#endif