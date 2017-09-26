#include "armor.h"

#include <iostream>

using namespace std;


Armor::Armor()
{
    m_name = "Dirty Shirt";
    m_protectionRating = 0;
}

Armor::Armor(string name, int protectionRating):
    Item(name), m_protectionRating(protectionRating)
{
}

void Armor::display() const
{
    cout << "The armor [ " << getName() << " ]. It has protection rating of "
         << getProtectionValue() << endl;
}

int Armor::getProtectionValue() const
{
    return m_protectionRating;
}

void Armor::setProtectionValue(int protectionRating)
{
    m_protectionRating = protectionRating;
}
