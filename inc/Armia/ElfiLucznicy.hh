#ifndef ELFILUCZNICY_HH
#define ELFILUCZNICY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class ElfiLucznicy : public karta
{
public:
    string nazwa() const { return "ElfiLucznicy"; }
    string zestaw() const { return "Armia"; }
    int punkty() const { return 10; }
    float premia(vector<karta *> zestaw) const
    {
        float a,b=0;
        karta *wsk = 0;
        for (int i = 0; i < zestaw.size(); i++)
        {  
            wsk = zestaw[i];
            a = zestaw[i]->punkty();
            b = b+a;
        }
        cout << b << endl;
        return b;
    }
    float kara(vector<karta *> zestaw) const
    {
        return 0;
    }
};

#endif