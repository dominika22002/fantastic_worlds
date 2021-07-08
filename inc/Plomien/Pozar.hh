#ifndef POZAR_HH
#define POZAR_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Pozar : public karta
{
public:
    string nazwa() const { return "Pozar"; }
    string zestaw() const { return "Plomien"; }
    int punkty() const { return 40; }
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
