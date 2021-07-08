#ifndef MAGICZNAROZDZKA_HH
#define MAGICZNAROZDZKA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class MagicznaRozdzka : public karta
{
public:
    string nazwa() const { return "MagicznaRozdzka"; }
    string zestaw() const { return "Bron"; }
    int punkty() const { return 1; }
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