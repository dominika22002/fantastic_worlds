#ifndef KLEJNOTPORZADKU_HH
#define KLEJNOTPORZADKU_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class KlejnotPorzadku : public karta
{
public:
    string nazwa() const { return "KlejnotPorzadku"; }
    string zestaw() const { return "Artefakt"; }
    int punkty() const { return 5; }
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