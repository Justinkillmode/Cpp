#include <iostream>

using namespace std;

int main(void)
{
	int alter;
	cout << "DU musst ueber 18 sein" << endl
		 << "Bitte gib dein Alter an:";
	cin >> alter;
	
	if( alter >=18) { //Bedinung
		cout << "Du bist " << alter << " Jahre alt." << endl //wenn erf�llt,
			 << "Programm wird geladen..."; //dann wird dieser Code ausgef�hrt
	}else if  ( (alter > 12) && (alter < 18) ) 
		cout << "Ok, Du bist " << alter << " Jahre Alt." << endl
			 << "Eingeschraenkte Inhalte werden geladen.";
	else {//ansonsten wird folgender Code ausgef�hrt
		cout << "Du bist noch zu jung. Nur noch: " << 18 - alter << " Jahre.";
	}
	
	cin.sync();
	cin.get();
}
/* Operator Erkl�rung
== 		Pr�fung auf Gleichheit
!= 		Pr�fung auf Ungleichheit
<= 		Pr�fung auf kleicher oder gleich
>= 		Pr�fung auf gr��er oder gleich
< 		Pr�fung auf kleiner als
> 		Pr�fung auf gr��er als

Logische Operatoren
	Operator Erkl�rung
	&&		 Beide Bedingungen m�ssen wahr sein
	||		 Mindestens eine Bedingung muss wahr sein*/
	
