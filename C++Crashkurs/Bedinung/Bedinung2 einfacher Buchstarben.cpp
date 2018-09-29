#include <iostream>

using namespace std;

int main(void)
{
	cout << "Waehle einen Modus:\n"
		 << "\ta. Singelplayer\n"
		 << "\tb. Multiplayer\n"
		 << "\tc. Optionen\n"
		 << "\td. Beenden\n"
		 << "Auswahl: ";
		 
	char auswahl;
	cin >> auswahl;
	
	switch( auswahl ) {
		case 's':
		case 'S':
			cout << "Singelplayer wird geladen...";
			break;
				
		case 'm':
		case 'M':
			cout << "Multiplayer wird geladen...";
			break;
				
		case 'o':
		case 'O':
			cout << "Optionen werden geladen...";
			break;
				
		case 'b':
		case 'B':
			return 0;
		default:
			 	cout << "Ungueltige Eungabe!" << endl
			 		 << "Das Programm wird beendet...";
			 	break;
	
	}
	
	cin.sync();
	cin.get();
	return 0;
}

