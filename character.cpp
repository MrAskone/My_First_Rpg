#include "character.h"

#include <iostream>

using namespace std;

Character::Character(string name)
{
    m_name = name;
    m_hitPoints = 100;
    m_mana = 50;

    cout << name << " was born!" << endl;

    status();
}

Character::Character(string name,
                     Weapon startingWeapon,
                     Armor startingArmor,
                     int hitPoints, int mana,
                     std::map<Item, int> startingInventory,
                     std::map<string, Spell> startingSpellbook):
    m_name(name),
    m_currentWeapon(startingWeapon),
    m_currentArmor(startingArmor),
    m_hitPoints(hitPoints), m_mana(mana),
    m_inventory(startingInventory),
    m_spellbook(startingSpellbook)
{
    cout << name << " was born!" << endl;

    status();
}

//---------- Combat ----------//

void Character::attack(Character &target)
{
    int damageSent = m_currentWeapon.getAttackPower();

    target.takeDamage(damageSent, true);
}

void Character::takeDamage(int incomingDamage, bool physical)
{
    int damageMitigation (0);

    if (physical)
    {
        damageMitigation = m_currentArmor.getProtectionValue();
    }

    int damageTaken = incomingDamage - damageMitigation;

    if (damageTaken < 0)
    {
        damageTaken = 0;

    }

    m_hitPoints -= damageTaken;

    cout << this->m_name << " takes " << damageTaken << " damage!\n";

    if(!isAlive())
    {
        cout << this->m_name << " is dead\n";
    }

}

//---------- Status and Equipment ----------//

void Character::changeWeapon(Weapon newWeapon)
{
    m_currentWeapon = newWeapon;
}

void Character::changeArmor(Armor newArmor)
{
    m_currentArmor = newArmor;
}

bool Character::isAlive()
{
    if (m_hitPoints <= 0)
    {
        m_hitPoints = 0;
        return false;
    }

    else
    {
        return true;
    }
}

void Character::status() const
{
    cout << this->m_name << " has " << m_hitPoints << " HP and " << m_mana << " mana." << endl
         << this->m_name << " is equiped with:\n";
    m_currentWeapon.display();
    m_currentArmor.display();

    cout << endl;
}

//---------- Getter and Accesseur ----------//

string Character::getName() const
{
    return m_name;
}

int Character::getHitPoints() const
{
    return m_hitPoints;
}

void Character::setHitPoints(int hitPoints)
{
    m_hitPoints = hitPoints;
}

int Character::getMana() const
{
    return m_mana;
}

void Character::setMana(int mana)
{
    m_mana = mana;
}




