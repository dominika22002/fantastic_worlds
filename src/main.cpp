
#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../inc/bohaterowie.hh"
#include "../inc/talia.hh"
#include "../inc/zestaw.hh"

int main()
{
    vector<shared_ptr<karta>> talia;
    talia = taliameaker();
    cout << talia;
    auto zestaw = Zestaw();
    zestaw.create(talia);
    zestaw.wyswietl();
    cout << pointcounter(zestaw);

    return 0;
}
// 10 22 32 44 38 77 11 9