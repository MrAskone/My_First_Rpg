#ifndef CHARACTER_H
#define CHARACTER_H

#include "weapon.h"
#include "armor.h"
#include "spell.h"
#include "item.h"

#include <vector>
#include <map>
#include <string>


class Character : public Item
{
public:
    Character(std::string name);

    Character(std::string name,
              Weapon startingWeapon,
              Armor startingArmor,
              int hitPoints, int mana,
              std::map<Item, int> startingInventory =  std::map<Item, int>(),
              std::map<std::string, Spell> startingSpellbook = std::map<std::string, Spell>());

    void attack (Character &target);
    void takeDamage (int incomingDamage, bool physical = true);

    void changeWeapon (Weapon newWeapon);
    void changeArmor (Armor newArmor);

    void receiveItem (Item itemReceived);
    void learnSpell (Spell spellLearned);

    void status() const;


    std::string getName() const;

    int getHitPoints() const;
    void setHitPoints(int hitPoints);

    int getMana() const;
    void setMana(int mana);

private:
    std::string m_name;
    int m_hitPoints;
    int m_mana;

    bool isAlive();


    Weapon m_currentWeapon;
    Armor m_currentArmor;

    std::map<std::string, Spell> m_spellbook;
    std::map<Item, int> m_inventory;


    // int m_level;
    // int m_currentExp;
    // int m_expToLevelUp;

};

#endif // CHARACTER_H
