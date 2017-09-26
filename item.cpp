#include "item.h"

#include <iostream>

using namespace std;

Item::Item()
{
    m_name = "";
}

Item::Item(string name): m_name(name)
{
}

std::string Item::getName() const
{
    return m_name;
}

void Item::setName(const std::string &name)
{
    m_name = name;
}
