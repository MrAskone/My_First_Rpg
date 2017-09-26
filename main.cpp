#include <QCoreApplication>

#include <string>
#include <iostream>
#include "character.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Character antoine ("Antoine");

    Weapon divineKnuckles ("Divine Knuckles", 300);
    Armor divineArmor ("Divine Armor", 230);

    Character kossa ("Kossa", divineKnuckles, divineArmor, 1000, 500);

    return a.exec();
}
