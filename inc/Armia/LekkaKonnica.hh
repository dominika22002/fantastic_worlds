#ifndef LEKKAKONNICA_HH
#define LEKKAKONNICA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class LekkaKonnica : public karta
{
public:
LekkaKonnica()
     {
         slowo_kara.push_back("Kraina");
         set = "Armia";
     }
     string nazwa() const { return "LekkaKonnica"; }
     int punkty() const { return 17; }
     float premia(Zestaw zestaw) const
     {
         return 0;
     }
     float kara(Zestaw zestaw) const
     {
         int a = 0;
         for (int i = 0; i < slowo_kara.size(); i++)
         {
             a = zestaw.how_much_found("zestaw", slowo_kara[i]) * (-2);
         }
         return a;
     }
     virtual ~LekkaKonnica(){};
};

#endif