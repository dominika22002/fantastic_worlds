#ifndef WLADCABESTII_HH
#define WLADCABESTII_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class WladcaBestii : public karta
{
public:
    string nazwa() const { return "WladcaBestii"; }
    string zestaw() const { return "Czarodziej"; }
    int punkty() const { return 9; }
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