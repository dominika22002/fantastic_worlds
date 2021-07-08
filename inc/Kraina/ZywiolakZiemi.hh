#ifndef ZYWIOLAKZIEMI_HH
#define ZYWIOLAKZIEMI_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class ZywiolakZiemi : public karta
{
public:
    string nazwa() const { return "ZywiolakZiemi"; }
    string zestaw() const { return "Kraina"; }
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
