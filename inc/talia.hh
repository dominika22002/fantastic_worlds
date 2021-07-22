#ifndef TALIA_HH
#define TALIA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "bohaterowie.hh"
#include "karta.h"


using namespace std;

void taliameaker(vector<shared_ptr<karta>> talia)
{
    // shared_ptr<karta> elfi_lucznicy = make_shared<ElfiLucznicy>();
    // talia.push_back(elfi_lucznicy);
    // shared_ptr<karta> krasnoludzka_piechota = make_shared<KrasnoludzkaPiechota>();
    // talia.push_back(krasnoludzka_piechota);
    // shared_ptr<karta> lekka_konnica = make_shared<LekkaKonnica>();
    // talia.push_back(lekka_konnica);
    // shared_ptr<karta> rycerze = make_shared<Rycerze>();
    // talia.push_back(rycerze);
    // shared_ptr<karta> zwiadowcy = make_shared<Zwiadowcy>();
    // talia.push_back(zwiadowcy);
    // shared_ptr<karta> drzewo_swiata = make_shared<DrzewoSwiata>();
    // talia.push_back(drzewo_swiata);
    // shared_ptr<karta> klejnot_porzadku = make_shared<KlejnotPorzadku>();
    // talia.push_back(klejnot_porzadku);
    // shared_ptr<karta> ksiega_zmian = make_shared<KsiegaZmian>();
    // talia.push_back(ksiega_zmian);
    // shared_ptr<karta> runa_ochrony = make_shared<RunaOchrony>();
    // talia.push_back(runa_ochrony);
    // shared_ptr<karta> tarcza_ketha = make_shared<TarczaKetha>();
    // talia.push_back(tarcza_ketha);
    // shared_ptr<karta> bazyliszek = make_shared<Bazyliszek>();
    // talia.push_back(bazyliszek);
    // shared_ptr<karta> hydra = make_shared<Hydra>();
    // talia.push_back(hydra);
    // shared_ptr<karta> jednorozec = make_shared<Jednorozec>();
    // talia.push_back(jednorozec);
    // shared_ptr<karta> rumak = make_shared<Rumak>();
    // talia.push_back(rumak);
    // shared_ptr<karta> smok = make_shared<Smok>();
    // talia.push_back(smok);
    // shared_ptr<karta> elfi_dlugi_luk = make_shared<ElfiDlugiLuk>();
    // talia.push_back(elfi_dlugi_luk);
    // shared_ptr<karta> magiczna_rozdzka = make_shared<MagicznaRozdzka>();
    // talia.push_back(magiczna_rozdzka);
    // shared_ptr<karta> miecz_ketha = make_shared<MieczKetha>();
    // talia.push_back(miecz_ketha);
    // shared_ptr<karta> okret = make_shared<Okret>();
    // talia.push_back(okret);
    // shared_ptr<karta> sterowiec_wojenny = make_shared<SterowiecWojenny>();
    // talia.push_back(sterowiec_wojenny);
    // shared_ptr<karta> blazen = make_shared<Blazen>();
    // talia.push_back(blazen);
    // shared_ptr<karta> czarnoksieznik = make_shared<Czarnoksieznik>();
    // talia.push_back(czarnoksieznik);
    // shared_ptr<karta> kolekcjoner = make_shared<Kolekcjoner>();
    // talia.push_back(kolekcjoner);
    // shared_ptr<karta> nekromanta = make_shared<Nekromanta>();
    // talia.push_back(nekromanta);
    // shared_ptr<karta> wladca_bestii = make_shared<WladcaBestii>();
    // talia.push_back(wladca_bestii);
    // shared_ptr<karta> zaklinaczka = make_shared<Zaklinaczka>();
    // talia.push_back(zaklinaczka);
    // shared_ptr<karta> fatamorgana = make_shared<Fatamorgana>();
    // talia.push_back(fatamorgana);
    // shared_ptr<karta> mimik = make_shared<Mimik>();
    // talia.push_back(mimik);
    // shared_ptr<karta> zmiennoksztaltny = make_shared<Zmiennoksztaltny>();
    // talia.push_back(zmiennoksztaltny);
    // shared_ptr<karta> dzwonnica = make_shared<Dzwonnica>();
    // talia.push_back(dzwonnica);
    // shared_ptr<karta> gory = make_shared<Gory>();
    // talia.push_back(gory);
    // shared_ptr<karta> jaskinia = make_shared<Jaskinia>();
    // talia.push_back(jaskinia);
    // shared_ptr<karta> las = make_shared<Las>();
    // talia.push_back(las);
    // shared_ptr<karta> zywiolak_ziemi = make_shared<ZywiolakZiemi>();
    // talia.push_back(zywiolak_ziemi);
    // shared_ptr<karta> blyskawica = make_shared<Blyskawica>();
    // talia.push_back(blyskawica);
    // shared_ptr<karta> kuznia = make_shared<Kuznia>();
    // talia.push_back(kuznia);
    // shared_ptr<karta> pozar = make_shared<Pozar>();
    // talia.push_back(pozar);
    // shared_ptr<karta> swieca = make_shared<Swieca>();
    // talia.push_back(swieca);
    // shared_ptr<karta> zywiolak_ognia = make_shared<ZywiolakOgnia>();
    // talia.push_back(zywiolak_ognia);
    // shared_ptr<karta> burza = make_shared<Burza>();
    // talia.push_back(burza);
    // shared_ptr<karta> dym = make_shared<Dym>();
    // talia.push_back(dym);
    // shared_ptr<karta> sniezyca = make_shared<Sniezyca>();
    // talia.push_back(sniezyca);
    // shared_ptr<karta> tornado = make_shared<Tornado>();
    // talia.push_back(tornado);
    // shared_ptr<karta> zywiolak_powietrza = make_shared<ZywiolakPowietrza>();
    // talia.push_back(zywiolak_powietrza);
    // shared_ptr<karta> bagno = make_shared<Bagno>();
    // talia.push_back(bagno);
    // shared_ptr<karta> fontanna_zycia = make_shared<FontannaZycia>();
    // talia.push_back(fontanna_zycia);
    // shared_ptr<karta> potop = make_shared<Potop>();
    // talia.push_back(potop);
    // shared_ptr<karta> wyspa = make_shared<Wyspa>();
    // talia.push_back(wyspa);
    // shared_ptr<karta> zywiolak_wody = make_shared<ZywiolakWody>();
    // talia.push_back(zywiolak_wody);
    // shared_ptr<karta> cesarzowa = make_shared<Cesarzowa>();
    // talia.push_back(cesarzowa);
    // shared_ptr<karta> krol = make_shared<Krol>();
    // talia.push_back(krol);
    // shared_ptr<karta> krolowa = make_shared<Krolowa>();
    // talia.push_back(krolowa);
    // shared_ptr<karta> ksiezniczka = make_shared<Ksiezniczka>();
    // talia.push_back(ksiezniczka);
    // shared_ptr<karta> wielki_wodz = make_shared<WielkiWodz>();
    // talia.push_back(wielki_wodz);
}
// ostream &operator<<(ostream &os, vector<shared_ptr<karta>> talia)
// {
//     for (int i = 0; i < talia.size(); i++)
//     {
//         if (i < 9)
//             os << i + 1 << "  - " << talia[i]->nazwa() << endl;
//         else
//             os << i + 1 << " - " << talia[i]->nazwa() << endl;
//     }
//     return os;
// }

// vector<shared_ptr<karta>> nekromanta_set(vector<shared_ptr<karta>> zestaw)
// {
//     vector<shared_ptr<karta>> nekro_set;
//     taliameaker(nekro_set);
//     for (int i = 0; i < nekro_set.size(); i++)
//     {
//         if (!(nekro_set[i]->zestaw() == "Armia" || nekro_set[i]->zestaw() == "Przywodca" || nekro_set[i]->zestaw() == "Czarodziej" || nekro_set[i]->zestaw() == "Bestia"))
//         {
//             nekro_set.erase(nekro_set.begin() + i);
//         }
//         for (int j = 0; j < zestaw.size(); j++)
//         {
//             if (nekro_set[i]->nazwa() == zestaw[j]->nazwa())
//             {
//                 nekro_set.erase(nekro_set.begin() + i);
//             }
//         }
//     }
//     return nekro_set;
// }

#endif