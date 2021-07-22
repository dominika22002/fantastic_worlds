#ifndef ZESTAW_HH
#define ZESTAW_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "bohaterowie.hh"

using namespace std;

class Zestaw : public vector<shared_ptr<karta>>
{
    vector<shared_ptr<karta>> zestaw;

public:
    Zestaw(){}
    Zestaw(vector<shared_ptr<karta>> talia)
    {
        cout << "podaj numery kart z zestawu" << endl;
        int a = 0;
        for (int i = 0; i < 2; i++)
        {
            cin >> a;
            zestaw.push_back(talia[a - 1]);
        }
    }
    int pointcounter(); 
    void wyswietl(); 
    shared_ptr<karta>& operator[] (int i){return zestaw[i];}
    shared_ptr<karta> operator[] (int i) const {return zestaw[i];}
    ~Zestaw(){}
};

//wyswietla zestaw
void Zestaw::wyswietl()
{
    for (int i = 0; i < zestaw.size(); i++)
    {
        if (i<9)
            cout << i+1 <<"  - "<< zestaw[i]->nazwa() << endl;
        else
            cout << i+1 <<" - "<< zestaw[i]->nazwa() << endl;
    }
}

//wylicza punkty
int Zestaw::pointcounter()
{
    int a = 0;
    return a = zestaw[0]->premia(zestaw);
};
#endif

