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
    string zestaw() const { return "Bestia"; }
    int punkty() const { return 9; }
    float premia(vector<shared_ptr<karta>> zestaw) const
    {
        if (found("nazwa", "Ksiezniczka", zestaw))
            return 30;
        if (found("nazwa", "Cesarzowa", zestaw) || found("nazwa", "Krolowa", zestaw) || found("nazwa", "Zaklinaczka", zestaw))
            return 15;
        return 0;
    }
    float kara(vector<shared_ptr<karta>> zestaw) const
    {
        return 0;
    }
    virtual ~Jednorozec(){};
};

#endif