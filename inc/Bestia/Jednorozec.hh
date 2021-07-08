#ifndef JEDNOROZEC_HH
#define JEDNOROZEC_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Jednorozec : public karta
{
public:
    string nazwa() const { return "Jednorozec"; }
    string zestaw() const { return "Bestia"; }
    int punkty() const { return 9; }
    float premia(vector<karta *> zestaw) const
    {
        return 0;
    } 
    float kara(vector<karta *> zestaw) const
    {
        return 0;
    }
};

#endif