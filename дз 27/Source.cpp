#include <iostream>
#include "Products.h"




int main() {
	setlocale(LC_ALL, "Russian");
	product X;
	productData(X);
	std::cout << "\n����� �� ����� ������:\n";
	printProd(X);
	std::cout << std::endl;
	std::cout << "������ ��������� ������, ��� ��� ����������: " << fullPrice(X) << std::endl << std::endl;
	std::cout << "������� ���������� ������, ������� ������ �������: ";
	int n;
	std::cin >> n;
	while (n > X.number) {
		std::cout << "�������� ���� ���������� ������, ��� ����!\n������� ���������� ��� ��� ���������� ���������� ��������: ";
		std::cin >> n;
	}
	sell(X, n);
	printProd(X);


	return 0;
}