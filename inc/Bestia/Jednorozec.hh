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
    Jednorozec() { set = "Bestia"; }
    string nazwa() const { return "Jednorozec"; }
    int punkty() const { return 9; }
    float premia(Zestaw zestaw) const
    {
        if (zestaw.found("nazwa", "Ksiezniczka"))
            return 30;
        if (zestaw.found("nazwa", "Cesarzowa") || zestaw.found("nazwa", "Krolowa") || zestaw.found("nazwa", "Zaklinaczka"))
            return 15;
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~Jednorozec(){};
};

#endif