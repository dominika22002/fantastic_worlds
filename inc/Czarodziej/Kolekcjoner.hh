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
    Kolekcjoner(){set = "Czarodziej";}
    string nazwa() const { return "Kolekcjoner"; }
    int punkty() const { return 7; }
    float premia(Zestaw zestaw) const
    {
        return how_long_the_collection(zestaw.collection());
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~Kolekcjoner(){};
};

#endif

