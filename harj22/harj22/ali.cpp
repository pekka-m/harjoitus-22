#include "maarittely.h"
int Valikko() {
	int valinta;
	cout << "VALIKKO\n"
		<< "0 Lopeta\n"
		<< "1 Lisaa henkilo\n"
		<< "2 Nayta kaikki henkilot\n"
		<< "3 Nayta henkilo\n"
		<< "4 Poista henkilon tiedot\n"
		<< "5 Tallenna tiedot tiedostoon\n"
		<< "6 Hae tiedot tiedostosta\n";
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