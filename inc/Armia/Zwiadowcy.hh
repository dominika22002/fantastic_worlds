#ifndef ZWIADOWCY_HH
#define ZWIADOWCY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Zwiadowcy : public karta
{
public:
    Zwiadowcy() { set = "Armia"; }
    string nazwa() const { return "Zwiadowcy"; }
    int punkty() const { return 5; }
    float premia(Zestaw zestaw) const
    {
        zestaw.delete_word("zestaw", "Armia");
        return zestaw.how_much_found("zestaw", "Kraina") * (10);
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~Zwiadowcy(){};
};

#endif
