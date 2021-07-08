#ifndef ELFIDLUGILUK_HH
#define ELFIDLUGILUK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class ElfiDlugiLuk : public karta
{
public:
    string nazwa() const { return "ElfiDlugiLuk"; }
    string zestaw() const { return "Bron"; }
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