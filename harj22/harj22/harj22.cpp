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

int main() {

	HENKREK henkilot[10];
	int henkilolkm = 0;
	int valinta = 1;

	for (henkilolkm; valinta != 0; henkilolkm++) {

		valinta = Valikko();

		if (valinta == 0) {
			cout << "\nHeidåå!\n\n";
			break;
		}
		else if (valinta == 1) {
			cout << "Anna henkilon tiedot muodossa etunimi koulumatka hatun koko: ";
			cin >> henkilot[henkilolkm].etunimi >> henkilot[henkilolkm].koulumatka>> henkilot[henkilolkm].hattu;
			cout << endl;
		}
		else if (valinta == 2) {



			for (int ind = 0; ind < henkilolkm; ind++) {
				cout << endl << henkilot[ind].etunimi << " " << henkilot[ind].koulumatka << " " << henkilot[ind].hattu << endl;
			}
			cout << endl;
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
		<< "2 Nayta kaikki henkilot\n";
	cin >> valinta;
	return valinta;
}

void TulostaHenkilo(HENKREK) {

}