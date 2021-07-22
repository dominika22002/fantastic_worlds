#ifndef ELFIDLUGILUK_HH
#define ELFIDLUGILUK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class ElfiDlugiLuk : public karta
{
public:
    ElfiDlugiLuk() { set = "Bron"; }
    string nazwa() const { return "ElfiDlugiLuk"; }
    int punkty() const { return 3; }
    float premia(vector<shared_ptr<karta>> zestaw) const
    {
        if (found("karta", "ElfiLucznicy", zestaw) || found("karta", "WielkiWodz", zestaw) || found("karta", "WladcaBestii", zestaw))
            return 30;
        else
            return 0;
    }
    float kara(vector<shared_ptr<karta>> zestaw) const
    {
        return 0;
    }
    virtual ~ElfiDlugiLuk(){};
};

#endif