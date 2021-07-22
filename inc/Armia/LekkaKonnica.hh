#ifndef LEKKAKONNICA_HH
#define LEKKAKONNICA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.h"

using namespace std;
class LekkaKonnica : public karta
{
public:
    // LekkaKonnica()
    // {
    //     slowo_kara.push_back("Kraina");
    //     set = "Armia";
    // }
    // string nazwa() const { return "LekkaKonnica"; }
    // int punkty() const { return 17; }
    // float premia(vector<shared_ptr<karta>> zestaw) const
    // {
    //     return 0;
    // }
    // float kara(vector<shared_ptr<karta>> zestaw) const
    // {
    //     int a = 0;
    //     for (int i = 0; i < slowo_kara.size(); i++)
    //     {
    //         a = how_much_found("zestaw", slowo_kara[i], zestaw) * (-2);
    //     }
    //     return a;
    // }
    // virtual ~LekkaKonnica(){};
};

#endif