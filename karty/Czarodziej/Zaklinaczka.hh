#ifndef ZAKLINACZKA_HH
#define ZAKLINACZKA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Zaklinaczka : public karta
{
public:
    string nazwa() const { return "Zaklinaczka"; }
    string zestaw() const { return "Czarodziej"; }
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


