#include <iostream>

using std::cout;
using std::cin;

void EX74_GetCoins()
{
	const int dollar = 100;
	const int quarter = 25;
	const int dime = 10;
	const int nickel = 5;
	const int penny = 1;

	int x {0};
	cout << "Enter number of cents: ";
	cin >> x;

	int ndollar = x / dollar;
	if (ndollar) x %= dollar;

	int nquarter = x / quarter;
	if (nquarter) x %= quarter;

	int ndime = x / dime;
	if (ndime) x %= dime;

	int nnickel = x / nickel;
	if (nnickel) x %= nickel;

	int npenny = x / penny;
	if (npenny) x %= penny;

	cout << "Coin denominations as follows: \n";
	cout << ndollar << " dollars\n";
	cout << nquarter << " quarters\n";
	cout << ndime << " dimes\n";
	cout << nnickel << " nickel\n";
	cout << npenny << " pennies\n";

}
