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

int main() {

	HENKREK henkilot[10];
	int henkilolkm = 0;
	int valinta = 1;

	while (valinta != 0) {

		valinta = Valikko();

		if (valinta == 0) {
			cout << "\nHeidåå!\n\n";
			break;
		}
		else if (valinta == 1) {

			LisaaHenkilo(henkilot, &henkilolkm);

		}
		else if (valinta == 2) {
			TulostaKaikkiHenkilot(henkilot, henkilolkm);
			cout << endl;
		}
		else if (valinta == 3) {
			TulostaHenkilo(henkilot[0]);
		}
		else {
			cout << "\n\nFATAL EXCEPTION HAS OCCURRED\n\n";
			henkilolkm--;
		}
	}
}

int Valikko() {
	int valinta;
	cout << "VALIKKO\n"
		<< "0 Lopeta\n"
		<< "1 Lisaa henkilo\n"
		<< "2 Nayta kaikki henkilot\n"
		<< "3 Nayta joku henkilo\n";
	cin >> valinta;
	return valinta;
}

void TulostaHenkilo(HENKREK henkilo) {
	cout << endl << henkilo.etunimi << " " << henkilo.koulumatka << " " << henkilo.hattu << "\n\n";
}

void TulostaKaikkiHenkilot(HENKREK kaikkihenkilot [], int henkilolkm) {
	for (int ind = 0; ind < henkilolkm; ind++) {
		cout << endl << kaikkihenkilot[ind].etunimi << " " << kaikkihenkilot[ind].koulumatka << " " << kaikkihenkilot[ind].hattu << endl;
	}
}
void LisaaHenkilo(HENKREK henkilo[], int *lkm) {
	cout << "Anna henkilon tiedot muodossa etunimi koulumatka hatun koko: ";
	cin >> henkilo[*lkm].etunimi >> henkilo[*lkm].koulumatka>> henkilo[*lkm].hattu;
	(*lkm)++;
	cout << endl;
}