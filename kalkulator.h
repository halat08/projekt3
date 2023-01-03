#include <iostream>
#include <string>

#pragma once

class kalkulator
{
	float a;
	float b;

	float dodawanie(float a, float b);
	float odejmowanie(float a, float b);
	float mnozenie(float a, float b);
	float dzielenie(float a, float b);

public:
	
	int obliczenia();
};

