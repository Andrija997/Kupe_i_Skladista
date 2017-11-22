
#pragma once
#include <cmath>
#include <iostream>
using namespace std;

constexpr double PI = 3.14;

class Kupa {
protected:
	double r, h;

public:

	Kupa(double poluprecnik = 1., double visina = 2.) : r(poluprecnik), h(visina) {};
 virtual double zapremina() {
		return (pow(r, 2)*PI*h / 3);
	}

	friend bool operator < (const Kupa& a, const Kupa& b) { return a.zapremina() < b.zapremina(); }
	

	friend std::ostream& operator <<(std::ostream& os, const Kupa& k) {
		return os << k.r << ", " << k.h;
	}

};
