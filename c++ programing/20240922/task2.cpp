#include <iostream>

void main2(void) {
	char name[100];
	char number[100];

	std::cout << "�̸��� �Է��Ͻÿ�: ";
	std::cin >> name;

	std::cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
	std::cin >> number;

	std::cout << "������� �̸��� :" << name << std::endl;
	std::cout << "������� ��ȭ��ȣ�� :" << number << std::endl;
}