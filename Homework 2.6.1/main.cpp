#include<iostream>
#include "My_Source.h"

void calc(double x, double y) {
	int oper = 0;
	double check=0;
	bool end = false;
	do {

		
		std::cout << "������� ������ �����: ";
		std::cin >> x;
		std::cout << "������� ������ �����: ";
		std::cin >> y;
		std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
		std::cin >> oper;
		switch (oper) {
		case 1:
			std::cout << x << " ���� " << y << " ����� " << sum(x, y) << std::endl;
			break;
		case 2:
			std::cout << x << " ����� " << y << " ����� " << subst(x, y) << std::endl;
			break;
		case 3:
			std::cout << x << " �������� �� " << y << " ����� " << mult(x, y) << std::endl;
			break;
		case 4:
			std::cout << x << " ������ �� " << y << " ����� " << divis(x, y) << std::endl;
			break;
		case 5:
			std::cout << x << " � ������� " << y << " ����� " << expo(x, y) << std::endl;
			break;
		default:
			std::cout << "������� �������� ��������" << std::endl;
			break;

		}
		std::cout << "���������? ������� 0 ,����� �����, � 1, ����� ����������: ";
		
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
