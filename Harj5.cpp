
/***********************************************
*Harjoitus 5
*Jouni Yl�nen
*Kuvaus:
*Kirjoita ohjelma, joka pyyt�� k�ytt�j�lt� kaksi kokonaislukua.
*Ohjelma tulostaa tekstin BINGO, mik�li luvut ovat samoja.
*Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
*
*Versio: 1.0
*PVM: 10.9.2014
************************************************/

#include <iostream>
using namespace std;

void main(void)

{
	int luku1, luku2;

	cout << "Anna kaksi kokonaislukua [2 x (luku ja enter)]: ";
	cin >> luku1;
	cin >> luku2;

	if (luku1 == luku2)
		cout << "BINGO";
	if (luku1 != luku2)
		cout << "BONGO";
	cout << "\n";
}