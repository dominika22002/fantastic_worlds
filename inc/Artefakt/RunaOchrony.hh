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
    float premia(vector<shared_ptr<karta>> zestaw) const
    {
        delete_penalty(zestaw);
    }
    float kara(vector<shared_ptr<karta>> zestaw) const
    {
        return 0;
    }
    virtual ~RunaOchrony(){};
};

#endif