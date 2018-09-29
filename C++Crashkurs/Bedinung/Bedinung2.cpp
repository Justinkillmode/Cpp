
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
		 
		 if (auswahl == '1'){
		 		cout << "Singelplayer wird geladen";
		 }else if (auswahl == '2'){
		 	cout << "Multiplayer wird geladen...";
		 }else if (auswahl == '3') {
		 	cout << "Optionen werden geladen...";
		 }else if (auswahl == '4') {
		 	return 0;
		 }
}
