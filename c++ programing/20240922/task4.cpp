#include <iostream>

void main() {
	int proceed =0;

	while (proceed != -1) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> proceed;

		if (proceed == -1) {
			std::cout << "���α׷��� �����մϴ�.";
		}
		else{
			std::cout << "�̹� �� �޿�: " << proceed * 0.12 + 50 << std::endl;
		}

		

	}

}