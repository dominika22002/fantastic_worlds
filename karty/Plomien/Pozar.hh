#ifndef POZAR_HH
#define POZAR_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Pozar : public karta
{
public:
    string nazwa() const { return "Pozar"; }
    string zestaw() const { return "Plomien"; }
    int punkty() const { return 40; }
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
