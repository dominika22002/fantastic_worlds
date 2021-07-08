#ifndef ZESTAW_HH
#define ZESTAW_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "bohaterowie.hh"

using namespace std;

void pointcounter(vector<karta *> zestaw)
{
    karta *wsk = 0;
    wsk = zestaw[0];
    zestaw[0]->premia(zestaw);


    
};

#endif