#ifndef CZARNOKSIEZNIK_HH
#define CZARNOKSIEZNIK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Czarnoksieznik : public karta
{
public:
    string nazwa() const { return "Czarnoksieznik"; }
    string zestaw() const { return "Czarodziej"; }
    int punkty() const { return 25; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Czarnoksieznik(){};
};

#endif


