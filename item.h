#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
public:
    Item();
    Item(std::string name);

    std::string getName() const;
    void setName(const std::string &name);

protected:

    std::string m_name;

private:



};

#endif // ITEM_H
