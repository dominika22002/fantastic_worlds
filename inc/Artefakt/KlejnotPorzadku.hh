#ifndef KLEJNOTPORZADKU_HH
#define KLEJNOTPORZADKU_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class KlejnotPorzadku : public karta
{
public:
    KlejnotPorzadku() { set = "Artefakt"; }
     string nazwa() const { return "KlejnotPorzadku"; }
     int punkty() const { return 5; }
     float premia(Zestaw zestaw) const
     {
         return how_long_the_order(zestaw.sequence());
     }
     float kara(Zestaw zestaw) const
     {
         return 0;
     }
    virtual ~KlejnotPorzadku(){};
};

#endif