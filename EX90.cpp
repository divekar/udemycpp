#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void Print(vector<int>& vec)
{
	cout << "List size = " << vec.size() << endl;
	for(auto i:vec)
		cout << i << ",";
	cout << endl;
}

void Add(vector<int>& vec)
{
	cout << "Enter number: ";
	int num;
	cin >> num;
	vec.push_back(num);
	cout << "List size = " << vec.size() << endl;
}
void DisplaySmallest(vector<int>& vec)
{
	auto result = std::min_element(std::begin(vec), std::end(vec));
	if (std::end(vec) != result)
		cout << "Smallest element = " << *result << endl;
}
void DisplayLargest(vector<int>& vec)
{
	auto result = std::max_element(std::begin(vec), std::end(vec));
	if (std::end(vec) != result)
		cout << "Largest element = " << *result << endl;
}
void EX90_Exercise()
{
	//vector<int>* vec = new vector<int>();
	//auto& vec_ref = *vec;
	vector<int> vec;
	auto& vec_ref = vec;
	while(true)
	{
		cout << "Options:" << endl;
		cout << "P - print" << endl;
		cout << "A - add a number" << endl;
		cout << "S - display smallest" << endl;
		cout << "L - display largest" << endl;
		cout << "Q - quit" << endl;
		cout << "Enter your choice:";
		char choice;
		cin >> choice;
		switch(choice)
		{
			case 'p':
			case 'P':
				Print(vec_ref); break;
			case 'a':
			case 'A':
				Add(vec_ref); break;
			case 's':
			case 'S':
				DisplaySmallest(vec_ref); break;
			case 'l':
			case 'L':
				DisplayLargest(vec_ref); break;
			case 'q':
			case 'Q':
				return;
		}
	}
}
