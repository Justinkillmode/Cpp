#include <iostream>

using namespace std;

int main(void)
{
	int alter;
	cout << "DU musst ueber 18 sein" << endl
		 << "Bitte gib dein Alter an:";
	cin >> alter;
	
	if( alter >=18) { //Bedinung
		cout << "Du bist " << alter << " Jahre alt." << endl //wenn erfüllt,
			 << "Programm wird geladen..."; //dann wird dieser Code ausgeführt
	}else if  ( (alter > 12) && (alter < 18) ) 
		cout << "Ok, Du bist " << alter << " Jahre Alt." << endl
			 << "Eingeschraenkte Inhalte werden geladen.";
	else {//ansonsten wird folgender Code ausgeführt
		cout << "Du bist noch zu jung. Nur noch: " << 18 - alter << " Jahre.";
	}
	
	cin.sync();
	cin.get();
}
/* Operator Erklärung
== 		Prüfung auf Gleichheit
!= 		Prüfung auf Ungleichheit
<= 		Prüfung auf kleicher oder gleich
>= 		Prüfung auf größer oder gleich
< 		Prüfung auf kleiner als
> 		Prüfung auf größer als

Logische Operatoren
	Operator Erklärung
	&&		 Beide Bedingungen müssen wahr sein
	||		 Mindestens eine Bedingung muss wahr sein*/
	
