#include "weapon.h"

#include <iostream>

using namespace std;

Weapon::Weapon()
{
    m_name = "Plastic Spoon";
    m_attackPower = 1;
}

Weapon::Weapon(string name, int attackPower):
    Item(name), m_attackPower(attackPower)
{
}

void Weapon::display() const
{

    cout << "The weapon [ " << getName() << " ]. It has an Attack Power of "
         << getAttackPower() << endl;

}

int Weapon::getAttackPower() const
{
    return m_attackPower;
}

void Weapon::setAttackPower(int attackPower)
{
    m_attackPower = attackPower;
}
