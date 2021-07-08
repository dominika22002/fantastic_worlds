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
    string nazwa() const { return "Zwiadowcy"; }
    string zestaw() const { return "Armia"; }
    int punkty() const { return 5; }
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
