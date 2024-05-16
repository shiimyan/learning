#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "rus");
	int y;
	std::cin >> y;
	if (y % 2 == 0) {
		std::cout << "это четное число" << std::endl;
	}
	if (y % 2 > 0) {
		std::cout << "это нечетное число" << std::endl;
	}
	return 0;
}
