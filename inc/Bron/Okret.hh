#ifndef OKRET_HH
#define OKRET_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Okret : public karta
{
public:
    Okret()
    {
        slowo_kara.push_back("Powodz");
        set = "Bron";
    }
    string nazwa() const { return "Okret"; }
    int punkty() const { return 23; }
    float premia(vector<shared_ptr<karta>> zestaw) const
    {
        delete_word_by_set("zestaw", "Armia", "Powodz", zestaw);
    }
    float kara(vector<shared_ptr<karta>> zestaw) const
    {
        if (!found("zestaw", "Powodz", zestaw))
            inactive_card("Okret", zestaw);
    }
    virtual ~Okret(){};
};

#endif