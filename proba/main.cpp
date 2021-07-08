
#include <vector>
#include <iostream>
#include <math.h>
#include <memory>

using namespace std;
class Karta
{
public:
    string nazwa();
    string zestaw();
    int punkty();
    float premia();
    float kara();
};
class ZestawKart
{
    Karta zestaw_kart[8];

public:
    Karta operator[](int Ind) const { return zestaw_kart[Ind]; }
    ZestawKart(Karta a,Karta b,Karta c,Karta d,Karta e,Karta f,Karta g,Karta h)
    {
        zestaw_kart[0] = a;
        zestaw_kart[1] = b;
        zestaw_kart[2] = c;
        zestaw_kart[3] = d;
        zestaw_kart[4] = e;
        zestaw_kart[5] = f;
        zestaw_kart[6] = g;
        zestaw_kart[7] = h;
    }
};

int main()
{
    Karta elfi_lucznicy = Karta();
    elfi_lucznicy.nazwa() = "ElfiLucznicy";

    return 0;
}