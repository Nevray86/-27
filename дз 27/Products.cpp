#include <iostream>
#include "Products.h"

void productData(product& P)
{
	std::cout << "������ �������� �������� -> ";
	std::cin >> P.name;
	std::cout << "������� ���������� ������ -> ";
	std::cin >> P.number;
	std::cout << "������� ��������� ������ -> ";
	std::cin >> P.price;
}

void printProd(product& P) {
	std::cout << "�������� �������� ->: " << P.name << std::endl;
	std::cout << "���������� ������ ->: " << P.number << std::endl;
	std::cout << "��������� ������ ->: " << P.price << std::endl;
}

int fullPrice(product& P) {
	return P.number * P.price;
}

void sell(product& P, int num) {
	P.number -= num;
}