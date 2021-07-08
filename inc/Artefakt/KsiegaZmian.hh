#ifndef KSIEGAZMIAN_HH
#define KSIEGAZMIAN_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class KsiegaZmian : public karta
{
public:
    string nazwa() const { return "KsiegaZmian"; }
    string zestaw() const { return "Artefakt"; }
    int punkty() const { return 3; }
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