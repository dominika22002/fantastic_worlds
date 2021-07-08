#ifndef DRZEWOSWIATA_HH
#define DRZEWOSWIATA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class DrzewoSwiata : public karta
{
public:
    string nazwa() const { return "DrzewoSwiata"; }
    string zestaw() const { return "Artefakt"; }
    int punkty() const { return 2; }
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