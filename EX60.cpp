#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

void EX60_Exercise()
{
	vector<int> vector1;
	vector1.push_back(10);
	vector1.push_back(20);

	vector<int> vector2;
	vector2.push_back(100);
	vector2.push_back(200);

	cout<< "first" << vector1.at(0) << " " << vector1.at(1) << " " << vector1.size() << " \n";
	cout<< "second" << vector2.at(0) << " " << vector2.at(1) << " " << vector2.size() << " \n";

	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);


	cout<< "2d1 " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << " " << vector_2d.at(0).size() << " \n";
	cout<< "2d2 " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << " " << vector_2d.at(1).size() << " \n";

	vector1.at(0) = 1000;

	cout<< "2d1 after " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << " " << vector_2d.at(0).size() << " \n";
	cout<< "2d2 after " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << " " << vector_2d.at(1).size() << " \n";

	
	cout<< "first after "  << vector1.at(0) << " " << vector1.at(1) << " " << vector1.size() << " \n";
	
}
