#ifndef ZESTAW_HH
#define ZESTAW_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include <algorithm>
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
// nazwa, zestaw
bool found(string kategoria,string element,vector<shared_ptr<karta>> zestaw)
{
    for (int i = 0; i < zestaw.size(); i++)
    {
        if (kategoria == "nazwa" && zestaw[i]->nazwa() == element)
            return true;
            
        if (kategoria == "zestaw" && zestaw[i]->zestaw() == element)
            return true;       
    }
    return false;
    
}

int how_much_found(string kategoria,string element,vector<shared_ptr<karta>> zestaw)
{
    int a = 0;
    for (int i = 0; i < zestaw.size(); i++)
    {
        if (kategoria == "nazwa" && zestaw[i]->nazwa() == element)
            a++;
            
        if (kategoria == "zestaw" && zestaw[i]->zestaw() == element)
            a++;   
    }
    return a;
}
void delete_word(string kategoria,string element,vector<shared_ptr<karta>> zestaw)
{
    for (int i = 0; i < zestaw.size(); i++)
    {    
        for (int j = 0; j < zestaw[i]->slowo_kara.size(); j++)
        {
            if(zestaw[i]->slowo_kara[j] == element)
            {
                zestaw[i]->slowo_kara.erase(zestaw[i]->slowo_kara.begin()+j);
            }
        }
    }
}

void delete_penalty(vector<shared_ptr<karta>> zestaw)
{
    for (int i = 0; i < zestaw.size(); i++)
    {    
        for (int j = 0; j < zestaw[i]->slowo_kara.size(); j++)
        {
            zestaw[i]->slowo_kara.pop_back();
        }
    }
}

bool is_different(vector<shared_ptr<karta>> zestaw)
{
    for (int i = 0; i < zestaw.size(); i++)
    {
        for (int j = 0; j < zestaw.size(); j++)
        {
            if (i!=j && zestaw[i] == zestaw[j])
            {
                return false;
            }
        }
    }
    return true;
}



int sequence(vector<shared_ptr<karta>> zestaw)
{
    vector<int> numbers;
    int a = 0, b = 0;
    for (int i = 0; i < zestaw.size(); i++)
    {
        numbers.push_back(zestaw[i]->punkty());
    }
    sort(numbers.begin(),numbers.end());
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i]+1 == numbers[i+1])
        {
            a++;
        }
        else
            b = max(a,b);
            a = 0;
    }
    b = max(a,b);
    return b;
}

int how_long_the_order(int seq)
{
    switch (seq)
    {
    case 1 || 2:
        return 0;
    case 3:
        return 10;
    case 4:
        return 30;
    case 5:
        return 60;
    case 6:
        return 100;
    case 7:
        return 150;
    default:
        return 0;
    }
}

void change_set(vector<shared_ptr<karta>> zestaw)
{
    int wybor = 0, choice = 0;
    cout << "mozesz zmienic jeden zestaw wybranej karty, wpisz numer karty." << endl;
    cout << zestaw;
    cin >> wybor;
    cout << "na jaki zestaw chcesz zmienic karte? wybierz zestaw karty" << endl;
    string sets[11] = {"Armia", "Artefakt","Bestia","Bron","Czarodziej","KartaSpecjalna","Kraina","Plomien","Pogoda","Powodz","Przywodca"};
    for (int i = 0; i < 11; i++)
    {
        if (i<9)
            cout << i+1 << "  - " << sets[i] << endl;
        else
            cout << i+1 << " - " << sets[i] << endl;
    }
    cin >> choice;
    zestaw[wybor-1]->set = sets[choice-1];
}




void pointcounter(vector<shared_ptr<karta>> zestaw)
{
    shared_ptr<karta> wsk = nullptr;
    wsk = zestaw[0];
    zestaw[0]->premia(zestaw); 
};
#endif