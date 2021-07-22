#ifndef BAZYLISZEK_HH
#define BAZYLISZEK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Bazyliszek : public karta
{
public:
    Bazyliszek()
    {
        slowo_kara.push_back("Armia");
        slowo_kara.push_back("Przywodca");
        slowo_kara.push_back("Bestia");
        set = "Bestia";
    }
    string nazwa() const { return "Bazyliszek"; }
    int punkty() const { return 35; }
    float premia(vector<shared_ptr<karta>> zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta>> zestaw) const
    {
        inactive(slowo_kara, zestaw);
    }
    virtual ~Bazyliszek(){};
};

#endif