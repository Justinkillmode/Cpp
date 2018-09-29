#include <iostream>

using namespace std;

int main(void)
{
	int eingabe;
	do {
		cin >> eingabe;
		cout<< eingabe * eingabe << endl;
	} while(eingabe != 0);
	
	return 0;
}
