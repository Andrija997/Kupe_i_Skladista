#pragma once
#include "Kupa.h"
#include "ZarKupa.h"

class Zapis {
public:
	Kupa& k;
	Zapis* next = nullptr;
	Zapis( Kupa& a) : k(a) {};
};


class List {
	public:
		Zapis *head = nullptr, *last = nullptr;


	
	void dodaj(Kupa& p) {
		last = (head ? last->next : head) = new Zapis(p);
	}

	

};


class Skladiste {
	List lista;

public :
	Skladiste() :lista() {};
	Skladiste(const Skladiste&) = delete;
	Skladiste& operator= (const Skladiste&) = delete;
	Skladiste& operator += (Kupa& kupa) {
		lista.dodaj(kupa);
	}
	friend ostream& operator << (ostream& os, const Skladiste& k){
		Zapis* pom = k.lista.head;
		os << "[";
		while (pom) {
			os << pom->k<<"|";
			pom = pom->next;
		}
		return os << "]";
	}

	int sk1(double v1, double v2) {
		Zapis *pom = lista.head;
		int count = 0;
		while (pom) {
			if (pom->k.zapremina() < v2 && pom->k.zapremina() > v1) count++;
			
		}
		pom = pom->next;
	}
};