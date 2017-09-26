#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"

#include <vector>
#include <map>
#include <string>

class Weapon : public Item
{
public:
    Weapon();

    Weapon(std::string name, int attackPower);

    void display()const;

    int getAttackPower() const;
    void setAttackPower(int attackPower);

private:

    int m_attackPower;


};

#endif // WEAPON_H
