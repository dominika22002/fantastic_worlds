#ifndef TARCZAKETHA_HH
#define TARCZAKETHA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class TarczaKetha : public karta
{
public:
    TarczaKetha(){set = "Artefakt";}
    string nazwa() const { return "TarczaKetha"; }
    int punkty() const { return 4; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        if(found("zestaw","Przywodca",zestaw))
        {
            if (found("nazwa","MieczKetha",zestaw))
                return 50;
            else
                return 15;
        }    
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~TarczaKetha(){};
};

#endif
