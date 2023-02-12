#include <iostream>

#define MODE 1

#if !defined MODE 
#error MODE undefined 
#endif



int main(int argc, char** argv) {	
#if MODE == 0
		std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
#include "addition.h"

		std::cout << "Работаю в боевом режиме\nВведите число 1: ";
		int a, b = 0;
		std::cin >> a;
		std::cout << "Введите число 2: ";
		std::cin >> b;
		std::cout << "Результат сложения: " << add(a, b) << std::endl;
#else
		std::cout << "Неизвестный режим.Завершение работы" << std::endl;
#endif

	return 0;
}