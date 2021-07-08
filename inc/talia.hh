#ifndef TALIA_HH
#define TALIA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "bohaterowie.hh"

using namespace std;

vector<karta *> taliameaker()
{
    vector<karta *> talia;
    ElfiLucznicy *elfi_lucznicy = new ElfiLucznicy();
    talia.push_back(elfi_lucznicy);
    KrasnoludzkaPiechota *krasnoludzka_piechota = new KrasnoludzkaPiechota();
    talia.push_back(krasnoludzka_piechota);
    LekkaKonnica *lekka_konnica = new LekkaKonnica();
    talia.push_back(lekka_konnica);
    Rycerze *rycerze = new Rycerze();
    talia.push_back(rycerze);
    Zwiadowcy *zwiadowcy = new Zwiadowcy();
    talia.push_back(zwiadowcy);
    DrzewoSwiata *drzewo_swiata = new DrzewoSwiata();
    talia.push_back(drzewo_swiata);
    KlejnotPorzadku *klejnot_porzadku = new KlejnotPorzadku();
    talia.push_back(klejnot_porzadku);
    KsiegaZmian *ksiega_zmian = new KsiegaZmian();
    talia.push_back(ksiega_zmian);
    RunaOchrony *runa_ochrony = new RunaOchrony();
    talia.push_back(runa_ochrony);
    TarczaKetha *tarcza_ketha = new TarczaKetha();
    talia.push_back(tarcza_ketha);
    Bazyliszek *bazyliszek = new Bazyliszek();
    talia.push_back(bazyliszek);
    Hydra *hydra = new Hydra();
    talia.push_back(hydra);
    Jednorozec *jednorozec = new Jednorozec();
    talia.push_back(jednorozec);
    Rumak *rumak = new Rumak();
    talia.push_back(rumak);
    Smok *smok = new Smok();
    talia.push_back(smok);
    ElfiDlugiLuk *elfi_dlugi_luk = new ElfiDlugiLuk();
    talia.push_back(elfi_dlugi_luk);
    MagicznaRozdzka *magiczna_rozdzka = new MagicznaRozdzka();
    talia.push_back(magiczna_rozdzka);
    MieczKetha *miecz_ketha = new MieczKetha();
    talia.push_back(miecz_ketha);
    Okret *okret = new Okret();
    talia.push_back(okret);
    SterowiecWojenny *sterowiec_wojenny = new SterowiecWojenny();
    talia.push_back(sterowiec_wojenny);
    Blazen *blazen = new Blazen();
    talia.push_back(blazen);
    Czarnoksieznik *czarnoksieznik = new Czarnoksieznik();
    talia.push_back(czarnoksieznik);
    Kolekcjoner *kolekcjoner = new Kolekcjoner();
    talia.push_back(kolekcjoner);
    Nekromanta *nekromanta = new Nekromanta();
    talia.push_back(nekromanta);
    WladcaBestii *wladca_bestii = new WladcaBestii();
    talia.push_back(wladca_bestii);
    Zaklinaczka *zaklinaczka = new Zaklinaczka();
    talia.push_back(zaklinaczka);
    Fatamorgana *fatamorgana = new Fatamorgana();
    talia.push_back(fatamorgana);
    Mimik *mimik = new Mimik();
    talia.push_back(mimik);
    Zmiennoksztaltny *zmiennoksztaltny = new Zmiennoksztaltny();
    talia.push_back(zmiennoksztaltny);
    Dzwonnica *dzwonnica = new Dzwonnica();
    talia.push_back(dzwonnica);
    Gory *gory = new Gory();
    talia.push_back(gory);
    Jaskinia *jaskinia = new Jaskinia();
    talia.push_back(jaskinia);
    Las *las = new Las();
    talia.push_back(las);
    ZywiolakZiemi *zywiolak_ziemi = new ZywiolakZiemi();
    talia.push_back(zywiolak_ziemi);
    Blyskawica *blyskawica = new Blyskawica();
    talia.push_back(blyskawica);
    Kuznia *kuznia = new Kuznia();
    talia.push_back(kuznia);
    Pozar *pozar = new Pozar();
    talia.push_back(pozar);
    Swieca *swieca = new Swieca();
    talia.push_back(swieca);
    ZywiolakOgnia *zywiolak_ognia = new ZywiolakOgnia();
    talia.push_back(zywiolak_ognia);
    Burza *burza = new Burza();
    talia.push_back(burza);
    Dym *dym = new Dym();
    talia.push_back(dym);
    Sniezyca *sniezyca = new Sniezyca();
    talia.push_back(sniezyca);
    Tornado *tornado = new Tornado();
    talia.push_back(tornado);
    ZywiolakPowietrza *zywiolak_powietrza = new ZywiolakPowietrza();
    talia.push_back(zywiolak_powietrza);
    Bagno *bagno = new Bagno();
    talia.push_back(bagno);
    FontannaZycia *fontanna_zycia = new FontannaZycia();
    talia.push_back(fontanna_zycia);
    Potop *potop = new Potop();
    talia.push_back(potop);
    Wyspa *wyspa = new Wyspa();
    talia.push_back(wyspa);
    ZywiolakWody *zywiolak_wody = new ZywiolakWody();
    talia.push_back(zywiolak_wody);
    Cesarzowa *cesarzowa = new Cesarzowa();
    talia.push_back(cesarzowa);
    Krol *krol = new Krol();
    talia.push_back(krol);
    Krolowa *krolowa = new Krolowa();
    talia.push_back(krolowa);
    Ksiezniczka *ksiezniczka = new Ksiezniczka();
    talia.push_back(ksiezniczka);
    WielkiWodz *wielki_wodz = new WielkiWodz();
    talia.push_back(wielki_wodz);
    return talia;
};

#endif