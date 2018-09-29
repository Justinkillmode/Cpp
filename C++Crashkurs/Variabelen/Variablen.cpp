#include <iostream>

using namespace std;

int main(void)
{
	// Variablenamen: Buckstaben, Ziffern und Unterstriche
	int meineZahl; //eine Ganzzahl (BSP.: 42)
	float meineKommazahl; //eine Kommazahl (BSP.: 3.18)
	double meineLangeKommaZahl;
	char meinZeichen; /* Zahl -128 bis 127
						oder ein Buchstabe*/
	unsigned char meinZeichen2; /* gleiche größe für die Variable
								möglich, aber nun vorzeichenlos
								 (ohne negative Zahlen) */
	
	bool meinJaNein; //wahr(true) oder falsch(false)
	/* Variabeln haben immer eine festgelegte Größe,
	deshalb können auch nur Zahlen bis zu einer bestimmten Größe
	in ihnen gespeichert werden.*/
	cout << "kleinstmoegliche Intergerzahl:" <<INT_MIN << endl
		 << "groesstmoegliche Intergerzahl:" <<INT_MAX << endl;
	
	/* Wichtig: Es wird zwischen Groß-/Kleinschreibung unterschieden!*/
	int VAR1;  //ist eine andere Variable als:
	int var1;
	
	cin.get();
	return 0;
}
