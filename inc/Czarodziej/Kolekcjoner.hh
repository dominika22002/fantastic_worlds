#ifndef KOLEKCJONER_HH
#define KOLEKCJONER_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Kolekcjoner : public karta
{
public:
    string nazwa() const { return "Kolekcjoner"; }
    string zestaw() const { return "Czarodziej"; }
    int punkty() const { return 7; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Kolekcjoner(){};
};

#endif

