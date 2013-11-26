/*********************************************************************
Tehtävä: HARJOITUS 22
Tekijä: Pekka Melgin
PVM: 19.11.2013
Kuvaus:
Tee ohjelma, joka toimii henkilörekisterinä (max 10).
Ohjelma antaa käyttäjälle seuraavan valikon:

VALIKKO
0 Lopeta
1 Lisaa henkilo
2 Nayta kaikki henkilot

Tallenna henkilöiden tiedot tietuetaulukkoon.
Tallennettavia tietoja ovat
etunimi (merkkijono)
koulumatka (liukuluku)
hatun koko (kokonaisluku)

Toteuta ensin koko ohjelma pääohjelmana. 

Tämän jälkeen lisää seuraavat aliohjelmat:
a) int Valikko(void);

b) void TulostaHenkilo(TIEDOT );
c) void TulostaKaikkiHenkilot(TIEDOT [], int lkm);
d) void LisaaHenkilo(TIEDOT [], int *lkm);
*********************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

struct HENKREK {
	char etunimi[10];
	float koulumatka;
	int hattu;
};

int Valikko();
void TulostaHenkilo(HENKREK);
void TulostaKaikkiHenkilot(HENKREK [], int);
void LisaaHenkilo(HENKREK [], int *lkm);