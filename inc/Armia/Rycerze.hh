#ifndef RYCERZE_HH
#define RYCERZE_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Rycerze : public karta
{
public:
    Rycerze()
    {
        slowo_kara.push_back("Przywodca");
        set = "Armia";
    }
    string nazwa() const { return "Rycerze"; }
    int punkty() const { return 20; }
    float premia(Zestaw zestaw) const
    {
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        for (int i = 0; i < slowo_kara.size(); i++)
        {
            if (zestaw.found("zestaw", slowo_kara[i]))
                return 0;
        }
        return -8;
    }
    virtual ~Rycerze(){};
};

#endif