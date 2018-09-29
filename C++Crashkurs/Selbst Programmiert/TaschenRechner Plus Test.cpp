#include <iostream>

using namespace std;

int main(void)
{
	float zahl_1;
	cout << "Geben sie die erste Zahl ein: " << endl;
	cin >> zahl_1;

	float zahl_2;
	cout << "Geben sie die zweite Zahl ein: " << endl;
	cin >> zahl_2;

	float ergebnisAdd;
	ergebnisAdd = zahl_1 + zahl_2;
	cout << "Die Loesung ist: " << ergebnisAdd << endl;
	cout << " Zum Beenden Enter druecken: " << endl;

	cin.sync();
	cin.get();
	return 0;
}
