#ifndef TARCZAKETHA_HH
#define TARCZAKETHA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class TarczaKetha : public karta
{
public:
    string nazwa() const { return "TarczaKetha"; }
    string zestaw() const { return "Artefakt"; }
    int punkty() const { return 4; }
    float premia(vector<karta *> zestaw) const
    {
        return 0;
    }
    float kara(vector<karta *> zestaw) const
    {
        return 0;
    }
};

#endif
