#ifndef ELFILUCZNICY_HH
#define ELFILUCZNICY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class ElfiLucznicy : public karta
{
public:
    ElfiLucznicy(){ set = "Armia"; }
    string nazwa() const { return "ElfiLucznicy"; }
    int punkty() const { return 10; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        for (int i = 0; i < zestaw.size(); i++)
        {
            if(!found("zestaw","Pogoda",zestaw))
                return 5;
        }
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~ElfiLucznicy(){};
};

#endif

    // float premia(vector<shared_ptr<karta> > zestaw_s) const
    // {
    //     // float a,b=0;
    //     // cout << "b1" << endl;
    //     // shared_ptr<karta> wsk = nullptr;
    //     // cout << "b2" << endl;
    //     // for (int i = 0; i < zestaw_s.size(); i++)
    //     // {  
    //     //     cout << "b3" << endl;
    //     //     wsk = zestaw_s[i];
    //     //     a = zestaw_s[i]->punkty();
    //     //     b = b+a;
    //     // }
    //     // cout << "b" << endl;
    //     // cout << b << endl;
    //     // return b;
    // }