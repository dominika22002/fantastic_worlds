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
    KsiegaZmian() { set = "Artefakt"; }
    string nazwa() const { return "KsiegaZmian"; }
    int punkty() const { return 3; }
    float premia(Zestaw zestaw) const
    {
        zestaw.change_set();
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~KsiegaZmian(){};
};

#endif