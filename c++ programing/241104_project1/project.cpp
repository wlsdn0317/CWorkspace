#include <iostream>
using namespace std;

const int NAME_LEN = 20;

int main(void) {
	int choice;
	while (1) {
		cout << "-----Menu-----" << endl;
		cout << "1. ���°���" << endl;
		cout << "2. �� ��" << endl;
		cout << "3. �� ��" << endl;
		cout << "4. �������� ��ü ���" << endl;
		cout << "5. ���α׷� ����" << endl;
		cout << "����: ";
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
			cout << "�ٽ� ������ �ּ���." << endl<<endl;
		}

	}
}