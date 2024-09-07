#include <cmath>
#include <iostream>
#include <locale>

int main()
{
  setlocale(LC_ALL, "rus");
    int x;
  std::cin >> x;
  if (x > 0 && x < 5) {
    std::cout << pow(x, 2) << std::endl;
  }
  else if (x <= 0 || x >= 5) {
    std::cout << "вы ввели число вне диапазона, введите другое число" << std::endl;
  }
  return 0;
