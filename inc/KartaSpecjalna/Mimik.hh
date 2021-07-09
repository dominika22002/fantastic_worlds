#ifndef MIMIK_HH
#define MIMIK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Mimik : public karta
{
public:
    string nazwa() const { return "Mimik"; }
    string zestaw() const { return "KartaSpecjalna"; }
    int punkty() const { return 0; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Mimik(){};
};

#endif
