#ifndef SPELL_H
#define SPELL_H

#include <vector>
#include <map>
#include <string>

class Spell
{
public:
    Spell();




private:

    int m_manaCost;
    int m_damageInflicted;
    int m_hitPointHealed;

    std::string name;



};

#endif // SPELL_H
