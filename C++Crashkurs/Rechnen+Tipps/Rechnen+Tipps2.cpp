#include <iostream>

using namespace std;

int main(void)
{
	int zahl_1 = 7, zahl_2 = 8, erg;
	
	//Addition mit Variablen
	erg = zahl_1 + zahl_2;
	cout << erg << endl;
	
	
	//erg um 1 erhöhen
	//erg ist gleich: Wert von erg (also 15) + 1
	erg = erg + 1;
	cout << erg << endl;
	
	//Variable um 1 erhöhen: ++ (daher hat C++ deinen Namen)
	erg++;
	cout << erg << endl;
	
	cin.get();
	return 0;
}
