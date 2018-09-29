#include <iostream>

using namespace std;

int main(void)
{
	int eingabe;
	eingabe = -1;
	
	while(eingabe != 0) {//Bedigung
		cin >> eingabe;
		cout << eingabe * eingabe << endl; //Potenz berechnen
		break;
	}
	
	return 0;
}
