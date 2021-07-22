#ifndef ZESTAW_HH
#define ZESTAW_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include <algorithm>
#include "bohaterowie.hh"

using namespace std;

// class Zestaw : public vector<shared_ptr<karta>>
// {
//     vector<shared_ptr<karta>> zestaw;

// public:
//     Zestaw() {}
//     Zestaw(vector<shared_ptr<karta>> talia)
//     {
//         cout << "podaj numery kart z zestawu" << endl;
//         int a = 0;
//         for (int i = 0; i < 2; i++)
//         {
//             cin >> a;
//             zestaw.push_back(talia[a - 1]);
//         }
//     }
//     int pointcounter();
//     int how_much_found(string kategoria, string element);
//     int sequence();
//     int collection();
//     int how_long_the_collection(int seq);
//     int how_much_odd();
//     void wyswietl();
//     void delete_word(string kategoria, string element);
//     void delete_penalty();
//     void delete_word_in_card(string kategoria, string element, shared_ptr<karta> karta);
//     void delete_word_by_set(string kategoria, string element, string set);
//     void change_set();
//     void add_card();
//     void inactive(vector<string> set);
//     void inactive_card(string element);
//     bool is_different();
//     bool found(string kategoria, string element);
//     shared_ptr<karta> &operator[](int i) { return zestaw[i]; }
//     shared_ptr<karta> operator[](int i) const { return zestaw[i]; }
//     ~Zestaw() {}
// };

// //wyswietla zestaw
// void Zestaw::wyswietl()
// {
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         if (i < 9)
//             cout << i + 1 << "  - " << zestaw[i]->nazwa() << endl;
//         else
//             cout << i + 1 << " - " << zestaw[i]->nazwa() << endl;
//     }
// }

// //wylicza punkty
// int Zestaw::pointcounter()
// {
//     int a = 0;
//     return a = zestaw[0]->premia(zestaw);
// };
// bool Zestaw::found(string kategoria, string element)
// {
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         if (kategoria == "nazwa" && zestaw[i]->nazwa() == element)
//             return true;

//         if (kategoria == "zestaw" && zestaw[i]->zestaw() == element)
//             return true;
//     }
//     return false;
// }

// int Zestaw::how_much_found(string kategoria, string element)
// {
//     int a = 0;
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         if (kategoria == "nazwa" && zestaw[i]->nazwa() == element)
//             a++;

//         if (kategoria == "zestaw" && zestaw[i]->zestaw() == element)
//             a++;
//     }
//     return a;
// }
// void Zestaw::delete_word(string kategoria, string element)
// {
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         for (int j = 0; j < zestaw[i]->slowo_kara.size(); j++)
//         {
//             if (zestaw[i]->slowo_kara[j] == element)
//             {
//                 zestaw[i]->slowo_kara.erase(zestaw[i]->slowo_kara.begin() + j);
//             }
//         }
//     }
// }

// void Zestaw::delete_penalty()
// {
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         for (int j = 0; j < zestaw[i]->slowo_kara.size(); j++)
//         {
//             zestaw[i]->slowo_kara.pop_back();
//         }
//     }
// }

// void Zestaw::delete_word_by_set(string kategoria, string element, string set)
// {
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         if (zestaw[i]->zestaw() == set)
//         {
//             for (int j = 0; j < zestaw[i]->slowo_kara.size(); j++)
//             {
//                 if (zestaw[i]->slowo_kara[j] == element)
//                 {
//                     zestaw[i]->slowo_kara.erase(zestaw[i]->slowo_kara.begin() + j);
//                 }
//             }
//         }
//     }
// }
// // void Zestaw::delete_word_in_card(string kategoria, string element, shared_ptr<karta> karta)
// // {
// //     for (int j = 0; j < karta->slowo_kara.size(); j++)
// //     {
// //         if (karta->slowo_kara[j] == element)
// //         {
// //             karta->slowo_kara.erase(karta->slowo_kara.begin() + j);
// //         }
// //     }
// // }

// bool Zestaw::is_different()
// {
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         for (int j = 0; j < zestaw.size(); j++)
//         {
//             if (i != j && zestaw[i] == zestaw[j])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int Zestaw::sequence()
// {
//     vector<int> numbers;
//     int a = 0, b = 0;
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         numbers.push_back(zestaw[i]->punkty());
//     }
//     sort(numbers.begin(), numbers.end());
//     for (int i = 0; i < numbers.size(); i++)
//     {
//         if (numbers[i] + 1 == numbers[i + 1])
//         {
//             a++;
//         }
//         else
//             b = max(a, b);
//         a = 0;
//     }
//     b = max(a, b);
//     return b;
// }

// int how_long_the_order(int seq)
// {
//     switch (seq)
//     {
//     case 1 || 2:
//         return 0;
//     case 3:
//         return 10;
//     case 4:
//         return 30;
//     case 5:
//         return 60;
//     case 6:
//         return 100;
//     case 7:
//         return 150;
//     default:
//         return 0;
//     }
// }

// int Zestaw::collection()
// {
//     vector<string> sets;
//     int a = 0, b = 0;
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         sets.push_back(zestaw[i]->zestaw());
//     }

//     sort(sets.begin(), sets.end());
//     for (int i = 0; i < sets.size(); i++)
//     {
//         if (sets[i] == sets[i + 1])
//         {
//             a++;
//         }
//         else
//             b = max(a, b);
//         a = 0;
//     }
//     b = max(a, b);
//     return b;
// }

// int how_long_the_collection(int seq)
// {
//     switch (seq)
//     {
//     case 3:
//         return 10;
//     case 4:
//         return 40;
//     case 5:
//         return 100;
//     default:
//         return 0;
//     }
// }

// void Zestaw::change_set()
// {
//     int wybor = 0, choice = 0;
//     cout << "mozesz zmienic jeden zestaw wybranej karty, wpisz numer karty." << endl;
//     wyswietl();
//     cin >> wybor;
//     cout << "na jaki zestaw chcesz zmienic karte? wybierz zestaw karty" << endl;
//     string sets[11] = {"Armia", "Artefakt", "Bestia", "Bron", "Czarodziej", "KartaSpecjalna", "Kraina", "Plomien", "Pogoda", "Powodz", "Przywodca"};
//     for (int i = 0; i < 11; i++)
//     {
//         if (i < 9)
//             cout << i + 1 << "  - " << sets[i] << endl;
//         else
//             cout << i + 1 << " - " << sets[i] << endl;
//     }
//     cin >> choice;
//     zestaw[wybor - 1]->set = sets[choice - 1];
// }

// // void Zestaw::add_card()
// // {
// //     int wybor = 0, choice = 0;
// //     vector<shared_ptr<karta>> nekro_set;
// //     nekro_set = nekromanta_set(zestaw);
// //     cout << "mozesz wybrac jedna wybrana karte z odrzuconych, sposrod Armii, Przywodcy, Czarodzieja lub bestii. wpisz numer karty." << endl;
// //     cout << nekro_set;
// //     cin >> wybor;
// //     cout << "na jaki zestaw chcesz zmienic karte? wybierz zestaw karty" << endl;
// //     string sets[11] = {"Armia", "Artefakt", "Bestia", "Bron", "Czarodziej", "KartaSpecjalna", "Kraina", "Plomien", "Pogoda", "Powodz", "Przywodca"};
// //     for (int i = 0; i < 11; i++)
// //     {
// //         if (i < 9)
// //             cout << i + 1 << "  - " << sets[i] << endl;
// //         else
// //             cout << i + 1 << " - " << sets[i] << endl;
// //     }
// //     cin >> choice;
// //     zestaw[wybor - 1]->set = sets[choice - 1];
// // }

// void Zestaw::inactive(vector<string> set)
// {
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         string name = zestaw[i]->nazwa();
//         for (int i = 0; i < set.size(); i++)
//         {
//             if (name == set[i])
//                 zestaw[i]->active = false;
//         }
//     }
// }

// void Zestaw::inactive_card(string element)

// {
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         if (zestaw[i]->nazwa() == element)
//             zestaw[i]->active = false;
//     }
// }

// int Zestaw::how_much_odd()
// {
//     int a = 0;
//     for (int i = 0; i < zestaw.size(); i++)
//     {
//         if (zestaw[i]->punkty() % 2 != 0)
//         {
//             a++;
//         }
//     }
//     return a - 1;
// }

#endif
