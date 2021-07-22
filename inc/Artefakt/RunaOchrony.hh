#ifndef RUNAOCHRONY_HH
#define RUNAOCHRONY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class RunaOchrony : public karta
{
public:
    RunaOchrony() { set = "Artefakt"; }
    string nazwa() const { return "RunaOchrony"; }
    int punkty() const { return 1; }
    float premia(Zestaw zestaw) const
    {
        zestaw.delete_penalty();
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~RunaOchrony(){};
};

#endif