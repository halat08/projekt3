#include <iostream>
#include <string>
#include "kalkulator.h"

int kalkulator::obliczenia()
{
    float a;
    float b;
    int x;

    std::cout << "Witam w kalkulatorze\n\n";
    std::cout << "Instrukcja:\n";
    std::cout << "1=dodawanie\n";
    std::cout << "2=odejmowanie\n";
    std::cout << "3=mnozenie\n";
    std::cout << "4=dzielenie\n\n";

    std::cout << "jakie dzialanie bedziemy wykonywali?\n";
    std::cin >> x;
    std::cout << "pierwsza liczba\n";
    std::cin >> a;
    std::cout << "druga liczba\n";
    std::cin >> b;
    if (x == 1)
    {
        float wynik = dodawanie(a, b);
        std::cout << "Wynik dodawania: " << wynik << std::endl;
    }
    else if (x == 2)
    {
        float wynik = odejmowanie(a, b);
        std::cout << "Wynik odejmowania: " << wynik << std::endl;
    }
    else if (x == 3)
    {
        float wynik = mnozenie(a, b);
        std::cout << "Wynik mnozenia: " << wynik << std::endl;
    }
    else if (x == 4)
    {
        float wynik = dzielenie(a, b);
        std::cout << "Wynik dzielenia: " << wynik << std::endl;
    }
    else
    {
        std::cout << "ERROR: ZOSTALY WPISANE ZLE DANE";

    }
    return 0;
}

float kalkulator::dodawanie(float a, float b)
{
    float c = a + b;
    return(c);
}

float kalkulator::odejmowanie(float a, float b)
{
    float c = a - b;
    return(c);
}

float kalkulator::mnozenie(float a, float b)
{
    float c = a * b;
    return(c);
}

float kalkulator::dzielenie(float a, float b)
{
    float c = a / b;
    return(c);
}