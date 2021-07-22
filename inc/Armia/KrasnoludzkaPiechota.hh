#ifndef KRASNOLUDZKAPIECHOTA_HH
#define KRASNOLUDZKAPIECHOTA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class KrasnoludzkaPiechota : public karta
{
public:
    KrasnoludzkaPiechota()
     {
         slowo_kara.push_back("Armia");
         set = "Armia";
     }
     string nazwa() const { return "KrasnoludzkaPiechota"; }
     int punkty() const { return 15; }
     float premia(Zestaw zestaw) const
     {
         return 0;
     }
     float kara(Zestaw zestaw) const
     {
         int a = 0;
         for (int i = 0; i < slowo_kara.size(); i++)
         {
             a = zestaw.how_much_found("zestaw", slowo_kara[i]) * (-2) + 2;
         }
         return a;
     }
     virtual ~KrasnoludzkaPiechota(){};
};

#endif