#ifndef MIECZKETHA_HH
#define MIECZKETHA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class MieczKetha : public karta
{
public:
    MieczKetha() { set = "Bron"; }
    string nazwa() const { return "MieczKetha"; }
    int punkty() const { return 7; }
    float premia(vector<shared_ptr<karta>> zestaw) const
    {
        if (found("zestaw", "Przywodca", zestaw))
            if (found("karta", "TarczaKetha", zestaw))
                return 40;
            else
                return 10;
    }
    float kara(vector<shared_ptr<karta>> zestaw) const
    {
        return 0;
    }
    virtual ~MieczKetha(){};
};

#endif