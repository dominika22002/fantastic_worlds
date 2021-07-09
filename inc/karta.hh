#ifndef KARTA_HH
#define KARTA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>

using namespace std;
class karta
{
public:
    virtual string nazwa() const = 0;
    virtual string zestaw() const = 0;
    virtual int punkty() const = 0;
    virtual float premia(vector<shared_ptr<karta>> zestaw) const = 0;
    virtual float kara(vector<shared_ptr<karta> > zestaw) const = 0;
};


#endif