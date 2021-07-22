#ifndef SMOK_HH
#define SMOK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Smok : public karta
{
public:
    Smok() { set = "Bestia"; }
    string nazwa() const { return "Smok"; }
    string zestaw() const { return "Bestia"; }
    int punkty() const { return 30; }
    float premia(vector<shared_ptr<karta>> zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta>> zestaw) const
    {
        if (!found("zestaw", "Czarodziej", zestaw))
            return -40;
        else
            return 0;
    }
    virtual ~Smok(){};
};

#endif