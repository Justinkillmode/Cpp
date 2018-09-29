#include <iostream>

using namespace std;

int main(void)
{
	/* Nach dem Anlegen können Werte in einer Variable gespeichert werden */
	
	
	int alter; //anlegen
	alter = 42; //Wert in Variable schreiben (Initialisierung)
	cout << "Das Alter betraegt:" << alter << endl; //Variable ausgeben
	
	int alter2 = 7; //anlegen und gleichzeitig initialisieren
	cout << "Das zweite Alter betraegt:" << alter2 << endl;
	
	int alter3; //weitere Variable fuer Zahlen anlegen
	cin >> alter3; //Wert vom Benutzer eingeben lassen und abspielen
	cout << "Das dritte alter betraegt:" << alter3; //Varialbe ausgeben
	
	//Tiparbeit sparen!
	int zahl_1, zahl_2, zahl_3; /*uns. erstellt direkt mehere
								Variablen vom Typ gleichen Typ*/
								
	cin.sync(); /*Leert einen Zwischenspeicher, der von cin >>
				gefüllt wurde. Würde dies nicht gesehen, wäre
				noch ein ENTER im speicher, der cin.get() sofort
				"auslöst". Sorgt also dafür, dass cin.get() auch
				nach Eingaben funktioniert!*/
	cin.get();
	return 0;
}
