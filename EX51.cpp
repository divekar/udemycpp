#include <iostream>
using std::cout;
using std::cin;

double GetCost(int num_of_rooms, double price_per_person)
{
	return num_of_rooms * price_per_person;
}

double GetTax(double tax, int num_of_rooms, double price_per_person)
{
	return GetCost(num_of_rooms, price_per_person) * tax;
}

void EX51_Exercise()
{
	double price_per_person {30};
	cout << "========================================\n";
	cout << "Welcome to Frank's Carpet Cleaning Service!\n";
	cout << "How many rooms would you like cleaned?";
	int num_of_rooms {0};
	double tax {0.06};
	cin >> num_of_rooms;

	cout << "\n";

	cout << "----------------------------------------\n";
	cout << "Estimate for carpet cleaning service\n";
	cout << "Number of rooms: " << num_of_rooms << "\n";
	cout << "Price per person: " << price_per_person << "\n";
	cout << "Cost: $" << GetCost(num_of_rooms, price_per_person) << "\n";
	cout << "Tax: $" << GetTax(tax, num_of_rooms, price_per_person) << "\n";
	cout << "========================================\n";
	cout << "Total Estimate: $" << GetCost(num_of_rooms, price_per_person) + 
		GetTax(tax, num_of_rooms, price_per_person) << "\n";
	cout << "This estimate is valid for 30 days\n";
}
