#include "maarittely.h"
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
		else if (valinta == 1) { //lisaa henkilo
			LisaaHenkilo(henkilot, &henkilolkm);
		}
		else if (valinta == 2) { //nayta kaikki henkilot
			TulostaKaikkiHenkilot(henkilot, henkilolkm);
			cout << endl;
		}
		else if (valinta == 3) { //nayta yksi henkilo
			TulostaHenkilo(henkilot[0]);
		}
		else if (valinta == 4) { //poista henkilon tiedot
			cout << "Ei valmis\n\n";
		}
		else if (valinta == 5) { //tallenna tiedot tiedostoon
			cout << "Ei valmis\n\n";
		}
		else if (valinta == 6) { //hae tiedot tiedostosta
			cout << "Ei valmis\n\n";
		}
		else {
			cout << "\n\nFATAL EXCEPTION HAS OCCURRED\n\n";
			henkilolkm--;
		}
	}
}