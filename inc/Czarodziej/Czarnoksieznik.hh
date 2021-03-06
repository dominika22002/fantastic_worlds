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
    Czarnoksieznik()
    {
        slowo_kara.push_back("Przywodca");
        slowo_kara.push_back("Czarodziej");
        set = "Czarodziej";
    }
    string nazwa() const { return "Czarnoksieznik"; }
    int punkty() const { return 25; }
    float premia(vector<shared_ptr<karta>> zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta>> zestaw) const
    {
        int a = 0, b = 0;
        for (int i = 0; i < slowo_kara.size(); i++)
        {
            a = how_much_found("zestaw", slowo_kara[i], zestaw);
            b = b + a;
        }
        b = b - 1;
        return b*(-10);
    }
    virtual ~Czarnoksieznik(){};
};

#endif
