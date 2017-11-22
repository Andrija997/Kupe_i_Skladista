#pragma once

#include "Kupa.h"



class ZarKupa : public Kupa {
protected:
	double d;

public :
	ZarKupa(double poluprecnik = 1, double visina = 2, double odsecak = 1) : Kupa(poluprecnik, visina) {}

	double zapremina() override { return pow(r, 2)*PI*(pow(h, 3) - pow(d, 3) / (3 * pow(h, 2))); }

	friend ostream& operator << (ostream& os, const ZarKupa& zk) { return os << zk.r << ", " << zk.h << ", " << zk.d; }


};












