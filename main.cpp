#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World: Enter your favorite number between 1 and 100: ";
	int x;
	cin >> x;
	if (x >= 1 && x <= 100)
		cout << "Amazing " << x << " is my favorite number too!\n";
	else
		cout << "Oh o! Try again!\n";
	return 0;
}
