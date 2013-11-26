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
		else if (valinta == 4) {

		}
		else if (valinta == 5) {

		}
		else if (valinta == 6) {

		}
		else {
			cout << "\n\nFATAL EXCEPTION HAS OCCURRED\n\n";
			henkilolkm--;
		}
	}
}