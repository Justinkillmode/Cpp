using namespace std;

int main(void)
{
	cout << "Waehle einen Modus:\n"
		 << "\t1. Singelplayer\n"
		 << "\t2. Multiplayer\n"
		 << "\t3. Optionen\n"
		 << "\t4. Beenden\n"
		 << "Auswahl: ";
		 
	char auswahl;
	cin >> auswahl;
	
	switch( auswahl ) {
			case '1':
				cout << "Singelplayer wird geladen...";
				break;
			case '2':
				cout << "Multiplayer wird geladen...";
				break;
			case '3':
				cout << "Optionen werden geladen...";
			case '4':
				return 0;
	}
}

