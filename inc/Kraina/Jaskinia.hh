#ifndef JASKINIA_HH
#define JASKINIA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Jaskinia : public karta
{
public:
    string nazwa() const { return "Jaskinia"; }
    string zestaw() const { return "Kraina"; }
    int punkty() const { return 6; }
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