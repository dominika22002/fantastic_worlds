#ifndef RUNAOCHRONY_HH
#define RUNAOCHRONY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class RunaOchrony : public karta
{
public:
    string nazwa() const { return "RunaOchrony"; }
    string zestaw() const { return "Artefakt"; }
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