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
	double price_per_large_room {35};
	double price_per_small_room {25};
	cout << "========================================\n";
	cout << "Welcome to Frank's Carpet Cleaning Service!\n";
	cout << "How many rooms would you like cleaned?";
	int num_of_small_rooms {0};
	int num_of_large_rooms {0};
	
	double tax {0.06};

	cout << "\n";

	cout << "----------------------------------------\n";
	cout << "Estimate for carpet cleaning service\n";
	cout << "Number of small rooms: " ; cin >> num_of_small_rooms;
	cout << "Number of large rooms: "; cin >> num_of_large_rooms;
	cout << "Price per small room: $" << price_per_small_room << "\n";
	cout << "Price per large room: $" << price_per_large_room << "\n";
	cout << "Cost: $" << GetCost(num_of_small_rooms, price_per_small_room)  +
		GetCost(num_of_large_rooms, price_per_large_room) << "\n";
	cout << "Tax: $" << GetTax(tax, num_of_small_rooms, price_per_small_room) +
		GetTax(tax, num_of_large_rooms, price_per_large_room) << "\n";
	cout << "========================================\n";
	cout << "Total Estimate: $" <<  GetCost(num_of_small_rooms, price_per_small_room)  +
		GetCost(num_of_large_rooms, price_per_large_room) +
		 GetTax(tax, num_of_small_rooms, price_per_small_room) +
		GetTax(tax, num_of_large_rooms, price_per_large_room) << "\n";
	cout << "This estimate is valid for 30 days\n";
}
