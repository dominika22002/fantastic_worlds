#ifndef RUMAK_HH
#define RUMAK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Rumak : public karta
{
public:
    Rumak() { set = "Bestia"; }
    string nazwa() const { return "Rumak"; }
    string zestaw() const { return "Bestia"; }
    int punkty() const { return 6; }
    float premia(vector<shared_ptr<karta>> zestaw) const
    {
        if (found("zestaw", "Przywodca", zestaw) || found("zestaw", "Czarodziej", zestaw))
            return 14;
        else
            return 0;
    }
    float kara(vector<shared_ptr<karta>> zestaw) const
    {
        return 0;
    }
    virtual ~Rumak(){};
};

#endif
