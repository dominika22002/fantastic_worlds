#ifndef NEKROMANTA_HH
#define NEKROMANTA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Nekromanta : public karta
{
public:
    string nazwa() const { return "Nekromanta"; }
    string zestaw() const { return "Czarodziej"; }
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

