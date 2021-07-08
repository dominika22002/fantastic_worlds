#ifndef FONTANNAZYCIA_HH
#define FONTANNAZYCIA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class FontannaZycia : public karta
{
public:
    string nazwa() const { return "FontannaZycia"; }
    string zestaw() const { return "Powodz"; }
    int punkty() const { return 1; }
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
