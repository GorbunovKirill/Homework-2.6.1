#include<iostream>
#include "My_Source.h"

void calc(double x, double y) {
	int oper = 0;
	double check=0;
	bool end = false;
	do {

		
		std::cout << "¬ведите первое число: ";
		std::cin >> x;
		std::cout << "¬ведите второе число: ";
		std::cin >> y;
		std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
		std::cin >> oper;
		switch (oper) {
		case 1:
			std::cout << x << " плюс " << y << " равно " << sum(x, y) << std::endl;
			break;
		case 2:
			std::cout << x << " минус " << y << " равно " << subst(x, y) << std::endl;
			break;
		case 3:
			std::cout << x << " умножить на " << y << " равно " << mult(x, y) << std::endl;
			break;
		case 4:
			std::cout << x << " делить на " << y << " равно " << divis(x, y) << std::endl;
			break;
		case 5:
			std::cout << x << " в степени " << y << " равно " << expo(x, y) << std::endl;
			break;
		default:
			std::cout << "Ќеверно введена€ операци€" << std::endl;
			break;

		}
		std::cout << "«акончить? ¬ведите 0 ,чтобы выйти, и 1, чтобы продолжить: ";
		
			std::cin >> check;
			if (check == 1) { end = true; std::cout << std::endl;}
		
			else { end = false; }
			

	} while (end);

}




int main() {
	setlocale(LC_ALL, "Russian");

	double a=0;
	double b=0;


	calc(a, b);
	


	return 0;

};
