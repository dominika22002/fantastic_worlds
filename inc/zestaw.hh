#ifndef ZESTAW_HH
#define ZESTAW_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "bohaterowie.hh"

using namespace std;

vector<shared_ptr<karta>> wybierz_zestaw(vector<shared_ptr<karta>> talia)
{
    vector<shared_ptr<karta>> zestaw;
    cout << "podaj numery kart z zestawu" << endl;
    int a=0;
    for (int i = 0; i < 2; i++)
    {
       cin >> a;
       zestaw.push_back(talia[a-1]);
    }
    
    return zestaw;
}

void pointcounter(vector<shared_ptr<karta>> zestaw)
{
    shared_ptr<karta> wsk = nullptr;
    wsk = zestaw[0];
    zestaw[0]->premia(zestaw); 
};
#endif