#include <iostream>

void test1();
void test2();

int main()
{
	test2();
}

//Läuft unendlich und gibt n plus 1000 aus und rechnet bei jedem Durchlauf zu n 1000 hinzu.
void test1() {
	for (int n = 0; n >= 0; n += 1000) {
		std::cout << n + 1000 << std::endl;
	}
}

//Gibt maximal postiven Float-Wert aus, da nur dort die Abbruch-Bedingung der for-Schleife erfüllt ist und somit die Ausgabe erreicht wird.
void test2() {
	float x;
	for (x = 0; x != x + 1; ++x) {}
	std::cout << x << std::endl;
}