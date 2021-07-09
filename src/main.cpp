
#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../inc/bohaterowie.hh"
#include "../inc/talia.hh"
#include "../inc/zestaw.hh"

int main()
{
    int a;
    vector<shared_ptr<karta>> talia;
    shared_ptr<karta> wsk = nullptr;
    vector<shared_ptr<karta>> zestaw;
    shared_ptr<karta> wsk2 = nullptr;
    talia = taliameaker();
    cout << talia;
    zestaw = wybierz_zestaw(talia);
    pointcounter(zestaw);
    cout << zestaw;



    // for (int i = 0; i < zestaw.size(); i++)
    // {
    //     wsk2 = zestaw[i];
    //     wsk = talia[i];
    // cout << zestaw[i]->nazwa() << endl;
    // cout << zestaw[i]->zestaw() << "\n";
    // cout << zestaw[i]->punkty() << "\n" << endl;
    // cout << talia[i]->nazwa() << endl;
    // cout << talia[i]->zestaw() << "\n";
    // cout << talia[i]->punkty() << "\n"
    //      << endl;
    // }

    return 0;
}
// 10 22 32 44 38 77 11 9