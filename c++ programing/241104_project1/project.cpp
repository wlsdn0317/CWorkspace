#include <iostream>
using namespace std;

const int NAME_LEN = 20;

int main(void) {
	int choice;
	while (1) {
		cout << "-----Menu-----" << endl;
		cout << "1. 계좌개설" << endl;
		cout << "2. 입 금" << endl;
		cout << "3. 출 금" << endl;
		cout << "4. 계좌정보 전체 출력" << endl;
		cout << "5. 프로그램 종료" << endl;
		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			return 0;
			break;
		default:
			cout << "다시 선택해 주세요." << endl<<endl;
		}

	}
}