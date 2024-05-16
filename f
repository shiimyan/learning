#include <iostream>
#include <locale>

int main() {
  setlocale(LC_ALL, "rus");
  int x;
  std::cin >> x;

  if (x > 0 && x < 5) {
    std::cout << x * x << std::endl; // умножение вместо pow
  } else if (x <= 0 || x >= 5) {
    std::cout << "вы ввели число вне диапазона, введите другое число" << std::endl;
  }
  return 0;
}
