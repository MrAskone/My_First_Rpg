#ifndef ARMOR_H
#define ARMOR_H

#include "item.h"

#include <vector>
#include <map>
#include <string>

class Armor : public Item
{
public:
    Armor();

    Armor( std::string name, int protectionRating);

    void display()const;

    int getProtectionValue() const;
    void setProtectionValue(int protectionRating);

private:

    int m_protectionRating;



};

#endif // ARMOR_H
