#ifndef FATAMORGANA_HH
#define FATAMORGANA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Fatamorgana : public karta
{
public:
    string nazwa() const { return "Fatamorgana"; }
    string zestaw() const { return "KartaSpecjalna"; }
    int punkty() const { return 0; }
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
