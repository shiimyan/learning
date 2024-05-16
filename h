#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "rus");
	int huy;
	std::cin >> huy;

	if (huy < 0 || huy > 10) {
		std::cout << "вы ввели число вне диапазона, введите другое число" << std::endl;
	}
	for (int i = 2; i <= 9; ++i) {
		std::cout << huy * i << " ";
	}
	std::cout << std::endl;
	//else if (huy >= 1 && huy <= 10) {
	//	std::cout << huy * 2 << " " << huy * 3 << " " << huy * 4 << " " 
	//<< huy * 5 << " " << huy * 6 << " " << huy * 7 << " "
		//<< huy * 8 << " " << huy * 9 << std::endl;
	//}
	return 0;
}
