
#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../inc/bohaterowie.hh"
#include "../inc/talia.hh"
#include "../inc/zestaw.hh"

int main()
{
    int karty[8];
    int a;
    vector<karta *> talia;
    karta *wsk = 0;
    talia = taliameaker();
    cout << "wybierz swoje karty:" << endl;
    cout << "1 - ElfiLucznicy" << endl;
    cout << "2 - KrasnoludzkaPiechota" << endl;
    cout << "3 - LekkaKonnica" << endl;
    cout << "4 - Rycerze" << endl;
    cout << "5 - Zwiadowcy" << endl;
    cout << "6 - DrzewoSwiata" << endl;
    cout << "7 - KlejnotPorzadku" << endl;
    cout << "8 - KsiegaZmian" << endl;
    cout << "9 - RunaOchrony" << endl;
    cout << "10 - TarczaKetha" << endl;
    cout << "11 - Bazyliszek" << endl;
    cout << "12 - Hydra" << endl;
    cout << "13 - Jednorozec" << endl;
    cout << "14 - Rumak" << endl;
    cout << "15 - Smok" << endl;
    cout << "16 - ElfiDlugiLuk" << endl;
    cout << "17 - MagicznaRozdzka" << endl;
    cout << "18 - MieczKetha" << endl;
    cout << "19 - Okret" << endl;
    cout << "20 - SterowiecWojenny" << endl;
    cout << "21 - Blazen" << endl;
    cout << "22 - Czarnoksieznik" << endl;
    cout << "23 - Kolekcjoner" << endl;
    cout << "24 - Nekromanta" << endl;
    cout << "25 - WladcaBestii" << endl;
    cout << "26 - Zaklinaczka" << endl;
    cout << "27 - Fatamorgana" << endl;
    cout << "28 - Mimik" << endl;
    cout << "29 - Zmiennoksztaltny" << endl;
    cout << "30 - Dzwonnica" << endl;
    cout << "31 - Gory" << endl;
    cout << "32 - Jaskinia" << endl;
    cout << "33 - Las" << endl;
    cout << "34 - ZywiolakZiemi" << endl;
    cout << "35 - Blyskawica" << endl;
    cout << "36 - Kuznia" << endl;
    cout << "37 - Pozar" << endl;
    cout << "38 - Swieca" << endl;
    cout << "39 - ZywiolakOgnia" << endl;
    cout << "40 - Burza" << endl;
    cout << "41 - Dym" << endl;
    cout << "42 - Sniezyca" << endl;
    cout << "43 - Tornado" << endl;
    cout << "44 - ZywiolakPowietrza" << endl;
    cout << "45 - Bagno" << endl;
    cout << "46 - FontannaZycia" << endl;
    cout << "47 - Potop" << endl;
    cout << "48 - Wyspa" << endl;
    cout << "49 - ZywiolakWody" << endl;
    cout << "50 - Cesarzowa" << endl;
    cout << "51 - Krol" << endl;
    cout << "52 - Krolowa" << endl;
    cout << "53 - Ksiezniczka" << endl;
    cout << "54 - WielkiWodz" << endl;
    vector<karta *> zestaw;
    karta *wsk2 = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> a;
        zestaw.push_back(talia[a-1]);
    }
    pointcounter(zestaw);


















    for (int i = 0; i < zestaw.size(); i++)
    {
        // wsk2 = zestaw[i];
    //     wsk = talia[i];
    // cout << zestaw[i]->nazwa() << endl;
    // cout << zestaw[i]->zestaw() << "\n";
    // cout << zestaw[i]->punkty() << "\n" << endl;
    // cout << talia[i]->nazwa() << endl;
    // cout << talia[i]->zestaw() << "\n";
    // cout << talia[i]->punkty() << "\n"
        //  << endl;
    }
    
    for (int i = 0; i < 8; i++)
    {
        // wsk = talia[i];
        // wsk2 = zestaw[i];
        // zestaw[i] = wsk;
        // cout << zestaw[i]->nazwa() << endl;
    }

    return 0;
}
// 10 22 32 44 38 77 11 9