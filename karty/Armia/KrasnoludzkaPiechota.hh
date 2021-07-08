#ifndef KRASNOLUDZKAPIECHOTA_HH
#define KRASNOLUDZKAPIECHOTA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class KrasnoludzkaPiechota : public karta
{
public:
    string nazwa() const { return "KrasnoludzkaPiechota"; }
    string zestaw() const { return "Armia"; }
    int punkty() const { return 15; }
    float premia()
    {
        return 0;
    }
    float kara()
    {
        return 0;
    }
};

#endif