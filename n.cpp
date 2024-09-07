#include <iostream>
#include <locale>

 int main()
{ 
     setlocale(LC_ALL, "rus");
     int hight;
     int weight;

     std::cout << "Введите свой рост:" << std::endl;
     std::cin >> hight;

         std::cout << "Введите свой вес:" << std::endl;
         std::cin >> weight;

     int x = hight - 110;
     std::cout << "Нормальный вес:" << x << std::endl;
    
     {
         if (weight < x)
             std::cout << "Недостаточный вес. Требуется набрать:" << x - weight << std::endl;
     }

     {
         if (weight > x)
             std::cout << "Переизбыточный вес. Требуется сбросить:" << weight - x << std::endl;
            
     }
        return 0;
    }


