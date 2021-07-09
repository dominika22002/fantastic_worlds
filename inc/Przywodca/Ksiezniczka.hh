#ifndef KSIEZNICZKA_HH
#define KSIEZNICZKA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Ksiezniczka : public karta
{
public:
    string nazwa() const { return "Ksiezniczka"; }
    string zestaw() const { return "Przywodca"; }
    int punkty() const { return 2; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Ksiezniczka(){};
};

#endif