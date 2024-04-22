#include <iostream>

struct personalBankData
{
	std::string name;
	int num_check;
	double value;
};

int main()
{
	personalBankData andry;
	std::cout << "Enter card num: ";
	std::cin >> andry.num_check;
	std::cout << std::endl << "Enter name: ";
	std::cin >> andry.name;
	std::cout << std::endl << "Enter value: ";
	std::cin >> andry.value;
	std::cout << std::endl << "Enter new value: ";
	std::cin >> andry.value;
	std::cout << std::endl << "your check: " << andry.name << "  " << andry.num_check << "  " << andry.value;
	return 0;
}