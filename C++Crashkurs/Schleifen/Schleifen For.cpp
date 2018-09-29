#include <iostream>

using namespace std;

int main(void)
{
	
	for(int i = 0; i <= 100; i++) { //Bedingung
		cout << "Potenz von" << i << " = " << i * i << endl; //Potenz berechnen
	}
	
	cin.sync();
	cin.get();
	return 0;
}
