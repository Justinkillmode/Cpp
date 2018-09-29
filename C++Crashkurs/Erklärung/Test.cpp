#include <iostream>

int main(void)
{
	std::cout << "Erste Zeile."; 
	std::cout << "Immer Noch Erste Zeile";
	std::cout << std::endl; //nächste Zeile
	std::cout << "Zweite Zeile.\n"; // \ist die Kurzform von std::endl
	std::cout << "usw";
	std::cin.get(); //hällt die konsole offen
	return 0;
}
