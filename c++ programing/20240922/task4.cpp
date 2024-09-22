#include <iostream>

void main() {
	int proceed =0;

	while (proceed != -1) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> proceed;

		if (proceed == -1) {
			std::cout << "프로그램을 종료합니다.";
		}
		else{
			std::cout << "이번 달 급여: " << proceed * 0.12 + 50 << std::endl;
		}

		

	}

}