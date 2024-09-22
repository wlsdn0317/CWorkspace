#include <iostream>

void main2(void) {
	char name[100];
	char number[100];

	std::cout << "이름을 입력하시오: ";
	std::cin >> name;

	std::cout << "전화번호를 입력하시오: ";
	std::cin >> number;

	std::cout << "사용자의 이름은 :" << name << std::endl;
	std::cout << "사용자의 전화번호는 :" << number << std::endl;
}